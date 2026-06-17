cmake_minimum_required(VERSION 3.20)
project(cpptemplate-system VERSION 1.0.0 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
add_executable(${PROJECT_NAME} src/main.cpp src/core.cpp)
