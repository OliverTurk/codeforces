cmake_minimum_required(VERSION 3.16)
project(codeforces_example)

set(CMAKE_C_COMPILER /opt/homebrew/bin/gcc-15)
set(CMAKE_CXX_COMPILER /opt/homebrew/bin/g++-15)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(main main.cpp)

include_directories(
    /opt/homebrew/Cellar/gcc/15.1.0/include/c++/15/aarch64-apple-darwin24
)
