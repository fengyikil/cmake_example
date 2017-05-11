cmake_minimum_required(VERSION 2.8)
project(t3)
#设置执行文件输出路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
aux_source_directory(. LIB_SRC)
add_executable(t3 ${LIB_SRC})

