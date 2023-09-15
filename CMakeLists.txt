cmake_minimum_required(VERSION 3.10.2)
project(tests_moniter LANGUAGES CXX)

# Qt相关
set(CMAKE_AUTOUIC ON)
# Qt's Meta-Object Compiler
set(CMAKE_AUTOMOC ON)
# Qt资源系统
set(CMAKE_AUTORCC ON)

#list(APPEND CMAKE_PREFIX_PATH "/usr/include/qt6")
find_package(Qt5 REQUIRED COMPONENTS Widgets)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(rpc_manager)
add_subdirectory(test_monitor)
add_subdirectory(proto)
add_subdirectory(display_monitor)

#target_link_libraries(test_monitor Qt5::Widgets)
#target_link_libraries(test_moniter Qt5::Widgets)