set(LIB_SRC mb1.cpp)
add_definitions("-DLIBMB1_BUILD")
add_library(libmb1 SHARED ${LIB_SRC})
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
#目标输出文件重命名
set_target_properties(libmb1 PROPERTIES OUTPUT_NAME "mb1")
