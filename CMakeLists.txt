cmake_minimum_required(VERSION 3.5)

project(Literal_K LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Literal_K main.cpp)

install(TARGETS Literal_K
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
