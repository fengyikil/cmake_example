find_package(Qt5 COMPONENTS Widgets DBus REQUIRED)
include_directories(../../lua-5.3.4/src)
aux_source_directory(. LIB_SRC)
list(REMOVE_ITEM LIB_SRC ./main.cpp;./qtinterface.cpp)
message("\n")
message("\n")
message("\n")
message("start")
message(${LIB_SRC})
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
qt5_wrap_ui(UI_HEADERS mainwindow.ui)
#这里名字需要与导出函数 luaopen_XXX一致，比如 elua_hello 对应 luaopen_elua_hello
add_library(elua_qt SHARED qtinterface.cpp ${LIB_SRC} ${UI_HEADERS})
target_link_libraries(elua_qt liblua)
target_link_libraries(elua_qt Qt5::Widgets Qt5::DBus)


add_executable(qexe main.cpp ${LIB_SRC} ${UI_HEADERS})
target_link_libraries(qexe Qt5::Widgets Qt5::DBus)
