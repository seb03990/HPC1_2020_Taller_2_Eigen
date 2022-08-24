cmake_minimum_required(VERSION 3.5)

project(Literal_D LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Literal_D main.cpp)

install(TARGETS Literal_D
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
