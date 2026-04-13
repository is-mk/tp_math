cmake_minimum_required(VERSION 4.1)
project(tp_math C)

set(CMAKE_C_STANDARD 11)

add_executable(tp_math main.c
        src/divisions.c
        include/divisions.h
        src/justeprix.c
        include/justeprix.h
        src/operations.c
        include/operations.h
        src/problemes.c
        include/problemes.h
        src/nombre.c
        include/nombre.h)
