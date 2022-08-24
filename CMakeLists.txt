cmake_minimum_required(VERSION 3.5)

project(Literal_C LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Literal_C main.cpp)

install(TARGETS Literal_C
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
