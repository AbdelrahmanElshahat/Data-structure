cmake_minimum_required(VERSION 3.20)
project(linked_Queue C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(linked_Queue
        queue.c
        queue.h
        main.c)
