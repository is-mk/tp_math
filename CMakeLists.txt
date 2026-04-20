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
        src/nombre.c
        include/nombre.h
        src/addition.c
        src/soustraction.c
        include/soustraction.h
        include/addition.h
        src/Multiplication.c
        include/Multiplication.h
        src/table_de_multiplication.c
        include/table_de_multiplication.h
        src/fichier.c
        include/fichier.h)
