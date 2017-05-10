cmake_minimum_required(VERSION 2.8)
project(NSP)
#lua 源码
add_subdirectory(lib/lua-5.3.4)
#lua 拓展库
add_subdirectory(lib/lua-expand/hello)
add_subdirectory(lib/lua-expand/qt)

#add_subdirectory(src)
