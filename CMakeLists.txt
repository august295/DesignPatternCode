# 要求最低Cmake版本
cmake_minimum_required(VERSION 3.10.0)

# 项目名称
project(DesignPatternCode)

# C++标准
set(CMAKE_CXX_STANDARD 11)

# 设置根目录
set(ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR})
set(BUILD_DIR $ENV{BUILD_DIR})

# 输出目录
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${BUILD_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${BUILD_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${BUILD_DIR}/bin)

# 添加子目录，子目录下必须有CMakeLists.txt
add_subdirectory(src)
