aux_source_directory(src LIB_SRC)
list(REMOVE_ITEM LIB_SRC src/lua.c;src/luac.c)
message(${LIB_SRC})

#¶¯Ì¬¿â
#add_definitions("-DLUA_BUILD_AS_DLL")
add_library(liblua SHARED ${LIB_SRC})
set_target_properties(liblua COMPILE_DEFINITIONS  "-DLUA_BUILD_AS_DLL")
set_target_properties(liblua PROPERTIES OUTPUT_NAME "lua53")

#¾²Ì¬¿â
add_library(liblua_static STATIC ${LIB_SRC})
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set_target_properties(liblua_static PROPERTIES OUTPUT_NAME "lua53s")

#½âÎöÆ÷
add_executable(lua src/lua.c)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
target_link_libraries(lua liblua)

#±àÒëÆ÷
add_executable(luac src/luac.c)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
target_link_libraries(luac liblua_static)




