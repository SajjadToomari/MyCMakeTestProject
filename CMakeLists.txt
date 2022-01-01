cmake_minimum_required(VERSION 3.20.0)
project(cmaketest VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

INCLUDE_DIRECTORIES(
    c:/dev/vcpkg/installed/x64-windows/include/
)
   
LINK_DIRECTORIES(
    c:/dev/vcpkg/installed/x64-windows/lib/
)

include(CTest)
enable_testing()

add_executable(cmaketest "main1.cpp" "main.cpp")

TARGET_LINK_LIBRARIES(cmaketest
  sqlite3 raylib
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
