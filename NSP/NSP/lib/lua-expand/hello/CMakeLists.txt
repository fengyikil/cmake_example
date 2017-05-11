include_directories(../../lua-5.3.4/src)
aux_source_directory(. LIB_SRC)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

#杩欓噷鍚嶅瓧闇€瑕佷笌瀵煎嚭鍑芥暟 luaopen_XXX涓€镊达紝姣斿 elua_hello 瀵瑰簲 luaopen_elua_hello
add_library(elua_hello SHARED ${LIB_SRC})
#set_target_properties(liblua_expand PROPERTIES OUTPUT_NAME "mylib")

target_link_libraries(elua_hello liblua)
