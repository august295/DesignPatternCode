:: 设置目录
set CURRENT_DIR=%~dp0
set BUILD_DIR=%CURRENT_DIR%build

if not exist %BUILD_DIR% (
    mkdir %BUILD_DIR%
)
cd %BUILD_DIR%

:: 生成项目
cmake .. -G "Visual Studio 15 2017 Win64"
pause