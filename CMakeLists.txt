# 要求最低Cmake版本
cmake_minimum_required(VERSION 3.10.0)

# 项目名称
project(DesignPattern)

# C++标准
set(CMAKE_CXX_STANDARD 11)

# 输出目录，${PROJECT_BINARY_DIR}为Cmake命令执行的位置
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)

# 设置根目录
set(ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR})

# 添加子目录，子目录下必须有CMakeLists.txt
add_subdirectory(src)
