cmake_minimum_required(VERSION 4.1)
project(tp_math C)

set(CMAKE_C_STANDARD 11)

add_executable(tp_math main.c
        src/addition.c
        src/soustraction.c
        include/soustraction.h
        include/addition.h
        src/Multiplication.c
        include/Multiplication.h
        src/table_de_mutliplication.c
        include/table_de_mutliplication.h)
