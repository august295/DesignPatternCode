# 引入外部函数
include(${ROOT_DIR}/module.cmake)

# 获取绝对路径，去掉 "/"
string(REGEX REPLACE "/$" "" CURRENT_FOLDER_ABSOLUTE ${CMAKE_CURRENT_SOURCE_DIR})

message(STATUS ${CURRENT_FOLDER_ABSOLUTE})
create_target(${CURRENT_FOLDER_ABSOLUTE})
