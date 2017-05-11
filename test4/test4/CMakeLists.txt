cmake_minimum_required(VERSION 2.8)
project(t4)
#设置执行文件输出路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
#添加头文件查找目录
include_directories(${PROJECT_SOURCE_DIR}/hello)

aux_source_directory(. LIB_SRC)
aux_source_directory(hello LIB_SRC)

add_executable(t4 ${LIB_SRC})

