# 允许小项目分类
SET_PROPERTY(GLOBAL PROPERTY USE_FOLDERS ON)

macro(create_target arg0)
    # 获取项目名
    get_filename_component(CURRENT_FOLDER ${arg0} NAME)

    # 项目名称
    project(${CURRENT_FOLDER})

    # 将当前目录下所有源码文件添加到变量
    file (GLOB HEADER_FILES "${CURRENT_FOLDER_ABSOLUTE}/*.h" "${CURRENT_FOLDER_ABSOLUTE}/*.hpp")
    file (GLOB SOURCE_FILES "${CURRENT_FOLDER_ABSOLUTE}/*.c" "${CURRENT_FOLDER_ABSOLUTE}/*.cpp")

    # 文件分类
    source_group("Header Files" FILES ${HEADER_FILES})
    source_group("Source Files" FILES ${SOURCE_FILES})

    # 头文件搜索的路径
    include_directories(${CURRENT_FOLDER_ABSOLUTE})

    # 生成可执行文件
    add_executable(${PROJECT_NAME} ${HEADER_FILES} ${SOURCE_FILES})

    # 项目分类
    get_filename_component(PARENT_FOLDER_ABSOLUTE ${arg0} DIRECTORY)
    get_filename_component(PARENT_FOLDER ${PARENT_FOLDER_ABSOLUTE} NAME)
    SET_PROPERTY(TARGET ${PROJECT_NAME} PROPERTY FOLDER ${PARENT_FOLDER})
endmacro()
