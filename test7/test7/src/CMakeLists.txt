﻿include_directories(${PROJECT_SOURCE_DIR}/libmb1)
include_directories(${PROJECT_SOURCE_DIR}/libmb2)
set(APP_SRC main.cpp)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
add_executable(t7 ${APP_SRC})
target_link_libraries(t7 libmb1 libmb2)
