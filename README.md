# MyCMakeTestProject

This an example for creating CMake project with sqlite3 and raylib library on windows machine

# Installation

First you need to install microsoft vcpkg

Warning : if you installed vcpkg in different path or different cpu architecture you need to change CMakeLists.txt file

```cmd
cd /
mkdir dev
cd dev
git clone https://github.com/Microsoft/vcpkg.git
cd vcpkg
bootstrap-vcpkg.bat
vcpkg integrate install
```

Install sqlite3 and raylib (x64)

```cmd
vcpkg install sqlite3:x64-windows
vcpkg install raylib:x64-windows
```
