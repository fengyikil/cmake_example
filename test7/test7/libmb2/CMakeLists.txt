﻿include_directories(${PROJECT_SOURCE_DIR}/libmb1)
set(LIB_SRC mb2.cpp)
add_definitions("-DLIBMB2_BUILD")
add_library(libmb2 SHARED ${LIB_SRC})
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
#目标输出文件重命名
set_target_properties(libmb2 PROPERTIES OUTPUT_NAME "mb2")
target_link_libraries(libmb2 libmb1)
