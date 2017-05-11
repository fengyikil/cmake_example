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

static int mysin (lua_State *L)
{
    double d = luaL_checknumber(L, 1);
    lua_pushnumber(L, sin(d));
    return 1;
}

static int l_printf(lua_State *L)
{
    const char * pPattern = luaL_checkstring(L, 1);
    const char * str = luaL_checkstring(L, 2);
    lua_pushnumber(L, printf(pPattern, str));
    return 1;
}

static int l_MessageBox(lua_State *L)
{
    const char * sTitle = luaL_checkstring(L, 1);
    const char * sText = luaL_optstring(L, 2, "");
    MessageBox(NULL, sTitle, sText, 0);
    return 1;
}

static const struct luaL_Reg mylib[] =
{
    {"mysin", mysin},
    {"printf", l_printf},
    {"messagebox", l_MessageBox},
    {NULL, NULL}
};

extern "C" int __declspec(dllexport) luaopen_elua_hello(lua_State *L)
{
    luaL_newlib(L, mylib);
    return 1;
}

extern "C" int  __declspec(dllexport) MyMessageBox(lua_State *L)
{
    const char * sText = luaL_checkstring(L, 1);
    const char * sTitle = luaL_checkstring(L, 2);
    return MessageBox(NULL, sText, sTitle, 0);;
}
