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
DWORD WINAPI ThreadUi(LPVOID lpParameter)
{
    int b = 1;
    QApplication app(b, NULL);
    MainWindow w;
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

static const struct luaL_Reg mylib[] =
{
{"init_gui", init_gui},
{NULL, NULL}
};

extern "C" int __declspec(dllexport) luaopen_elua_qt(lua_State *L)
{
    luaL_newlib(L, mylib);
    return 1;
}
