cmake_minimum_required(VERSION 3.17)
project(chess_engine_C C)

set(CMAKE_C_STANDARD 99)

add_executable(chess_engine_C vice.c defs.h init.c bitboards.c hashkeys.c board.c data.c attack.c io.c movegen.c validate.c)