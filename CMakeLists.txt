cmake_minimum_required(VERSION 3.5)

project(Literal_P LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Literal_P main.cpp)

install(TARGETS Literal_P
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
