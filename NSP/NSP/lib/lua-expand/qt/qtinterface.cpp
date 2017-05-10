#include <Windows.h>

extern "C"{
#include <lua.h>
#include <lauxlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <lualib.h>
#include <math.h>
}
#include<QApplication>
#include <QThread>
#include "mainwindow.h"
#include "myMesg.h"

static myMesg msg;
DWORD WINAPI ThreadUi(LPVOID lpParameter)
{
    int b = 1;
    QApplication app(b, NULL);
    MainWindow w;
    QObject::connect(&msg,SIGNAL(notify_gui(QString)),&w,SLOT(rec_string(QString)));
    w.show();
    app.exec();

    return 0;
}
static int init_gui(lua_State *L)
{      
    HANDLE HOne;
    HOne=CreateThread(NULL,0,ThreadUi,NULL,0,NULL);
    return 1;
}
static int send_gui(lua_State *L)
{

    QString str = lua_tostring(L, 1);
    msg.notify_gui(str);
    return 1;
}

static const struct luaL_Reg mylib[] =
{
{"init_gui", init_gui},
{"send_gui", send_gui},
{NULL, NULL}
};

extern "C" int __declspec(dllexport) luaopen_elua_qt(lua_State *L)
{
    luaL_newlib(L, mylib);
    return 1;
}
