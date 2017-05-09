#设置执行文件输出路径
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

aux_source_directory(. LIB_SRC)
#添加宏 为了兼容windows
add_definitions("-DLIBHELLO_BUILD")

#动态库
add_library(lhello SHARED ${LIB_SRC})

