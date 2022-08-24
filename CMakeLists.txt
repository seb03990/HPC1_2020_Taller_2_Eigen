cmake_minimum_required(VERSION 3.5)

project(Literal_L LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Literal_L main.cpp)

install(TARGETS Literal_L
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
