# 要求最低Cmake版本
cmake_minimum_required(VERSION 3.10.0)

# 项目名称
project(DesignPatternCode)

# C++标准
set(CMAKE_CXX_STANDARD 11)

# 条件编译
if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
    add_compile_options("/utf-8")
elseif()
endif()

# 开启使用文件夹功能，将所有默认目标放入到名为 CMakePredefinedTargets 的文件夹中
set_property(GLOBAL PROPERTY USE_FOLDERS ON)
set_property(GLOBAL PROPERTY PREDEFINED_TARGETS_FOLDER "CMakePredefinedTargets")

# 设置根目录
set(ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR})
set(BUILD_DIR ${ROOT_DIR}/build)

# 输出目录
if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
    set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_DEBUG ${BUILD_DIR}/bin) # .lib and .a
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY_DEBUG ${BUILD_DIR}/bin) # .so and .dylib
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${BUILD_DIR}/bin) # .exe and .dll
    set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_RELEASE ${BUILD_DIR}/bin) # .lib and .a
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY_RELEASE ${BUILD_DIR}/bin) # .so and .dylib
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${BUILD_DIR}/bin) # .exe and .dll
elseif(CMAKE_CXX_COMPILER_ID MATCHES "GNU")
    set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${BUILD_DIR}/bin) # .lib and .a
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${BUILD_DIR}/bin) # .so and .dylib
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${BUILD_DIR}/bin) # .exe and .dll
endif()
set(CMAKE_DEBUG_POSTFIX "d")

# 添加子目录，子目录下必须有CMakeLists.txt
add_subdirectory(src)
