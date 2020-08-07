cmake_minimum_required(VERSION 3.17)
project(tateti C)

set(CMAKE_C_STANDARD 11)

add_executable(tateti main.c board.c board.h direction.c direction.h in_out.c in_out.h validations.c validations.h utils.c utils.h)