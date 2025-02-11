# 引入外部函数
include(${ROOT_DIR}/cmake/module.cmake)

# 创建项目
set(ProjectName "chain")
CreateTarget(${ProjectName} "Exe" "behavioral")
