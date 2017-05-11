cmake_minimum_required(VERSION 2.8)
project(t5)
#设置执行文件输出路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
#添加子模块目录
add_subdirectory(hello)
#添加头文件查找目录
include_directories(${PROJECT_SOURCE_DIR}/hello)

aux_source_directory(. LIB_SRC)
add_executable(t5 ${LIB_SRC})
#链接子模块库
target_link_libraries(t5 lhello)

