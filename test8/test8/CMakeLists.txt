cmake_minimum_required(VERSION 2.8)
project(t8)

aux_source_directory(. LIB_SRC)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

add_executable(t8_1 ${LIB_SRC})
add_executable(t8_2 ${LIB_SRC})

#下面是测试新老方法，注释其中一个测试，看效果.
#add_definitions("-DTEST_DEF") #老式添加宏的方法,影响整个范围
set_target_properties(t8_1 PROPERTIES COMPILE_DEFINITIONS "TEST_DEF") #新式添加宏的方法,只影响当前目标(target)
