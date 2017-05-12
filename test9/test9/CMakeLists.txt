cmake_minimum_required(VERSION 2.8)
project(t9)
#设置执行文件输出路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
#添加子模块目录
#add_subdirectory(hello)

include_directories(${PROJECT_SOURCE_DIR}/hello)#添加头文件查找目录
aux_source_directory(. LIB_SRC)
add_executable(t9_1 ${LIB_SRC})
add_executable(t9_2 ${LIB_SRC})
#使用动态库
set_target_properties(t9_1 PROPERTIES COMPILE_DEFINITIONS "SPACE_USE_DLL")
target_link_libraries(t9_1 ${PROJECT_SOURCE_DIR}/lib/lhello.lib)
#使用静态库
target_link_libraries(t9_2 ${PROJECT_SOURCE_DIR}/lib/lhellos.lib)

message("\n")
message("\n")
message("\n")
message(${CMAKE_C_FLAGS})
message("\n")
message("\n")
