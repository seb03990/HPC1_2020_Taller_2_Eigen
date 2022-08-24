cmake_minimum_required(VERSION 3.5)

project(Literal_I LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Literal_I main.cpp)

install(TARGETS Literal_I
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
