cmake_minimum_required(VERSION 3.8)

project(advent_of_code_2022)

set(target advent_of_code_2022)

set(CMAKE_CXX_STANDARD 20)

set(source 
    main.cpp
    src/FileReader.cpp
)

add_definitions(-DINPUT_FILE="${CMAKE_CURRENT_SOURCE_DIR}/input.txt")

add_executable(${target} ${source})

target_include_directories(${target} PRIVATE include)