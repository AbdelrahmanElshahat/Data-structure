cmake_minimum_required(VERSION 3.17)
project(linked_stack C)

set(CMAKE_C_STANDARD 99)

include_directories(.)

add_executable(linked_stack
        "linked stack.c"
        "linked stack.h"
        "main.c"
"Blanced brackets.c"
"Blanced brackets.h")
