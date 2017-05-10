include_directories(../lua-5.3.4/src)
aux_source_directory(src LIB_SRC)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

add_library(liblua_expand SHARED ${LIB_SRC})
#这里名字需要与导出函数 luaopen_XXX一致，比如 mylib 对应 luaopen_mylib
set_target_properties(liblua_expand PROPERTIES OUTPUT_NAME "mylib")

target_link_libraries(liblua_expand liblua)
