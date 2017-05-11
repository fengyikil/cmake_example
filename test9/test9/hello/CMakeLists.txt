#设置执行文件输出路径
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

aux_source_directory(. LIB_SRC)

#动态库
add_library(lhello SHARED ${LIB_SRC})
add_library(lhellos STATIC ${LIB_SRC})

#旧添加宏
#add_definitions("-DMYDLL")
#add_definitions("-DLIBHELLO_BUILD")

#新添加宏，连续添加两个有问题，原因未名？采用target_compile_definitions添加
#set_target_properties(lhello PROPERTIES COMPILE_DEFINITIONS "MYDLL")
#set_target_properties(lhello PROPERTIES COMPILE_DEFINITIONS "LIBHELLO_BUILD")

target_compile_definitions(lhello PRIVATE LIBHELLO_BUILD=1 USEDLL=1)
