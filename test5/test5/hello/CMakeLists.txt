#设置执行文件输出路径
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

aux_source_directory(. LIB_SRC)
#静态库
add_library(lhello STATIC ${LIB_SRC})

