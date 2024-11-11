cmake_minimum_required(VERSION 3.21)
project(baum C)

set(CMAKE_C_STANDARD 99)

add_executable(baum main.c baum.c baum.h)
