cmake_minimum_required(VERSION 2.8)
project(t9)
#设置执行文件输出路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
#添加子模块目录
#add_subdirectory(hello)
#添加头文件查找目录
include_directories(${PROJECT_SOURCE_DIR}/hello)

aux_source_directory(. LIB_SRC)
add_executable(t9 ${LIB_SRC})


#使用动态库
#set_target_properties(t9 PROPERTIES COMPILE_DEFINITIONS "MYDLL")
#target_link_libraries(t9 ${PROJECT_SOURCE_DIR}/lib/lhello.lib)
#使用静态库
target_link_libraries(t9 ${PROJECT_SOURCE_DIR}/lib/lhellos.lib)
