cmake_minimum_required(VERSION 3.8)

project(advent_of_code_2022)

set(target advent_of_code_2022)

set(CMAKE_CXX_STANDARD 20)

set(source 
    main.cpp
    src/FileReader.cpp
    src/Solution.cpp
    src/CalorieCounter.cpp
    src/RockPaperScissors.cpp
    src/RucksackReorganization.cpp
    src/CampCleanup.cpp
    src/SupplyStacks.cpp
    src/TuningTrouble.cpp
)

add_definitions(-DINPUT_FILE_DAY1="${CMAKE_CURRENT_SOURCE_DIR}/input/day1_input.txt")
add_definitions(-DINPUT_FILE_DAY2="${CMAKE_CURRENT_SOURCE_DIR}/input/day2_input.txt")
add_definitions(-DINPUT_FILE_DAY3="${CMAKE_CURRENT_SOURCE_DIR}/input/day3_input.txt")
add_definitions(-DINPUT_FILE_DAY4="${CMAKE_CURRENT_SOURCE_DIR}/input/day4_input.txt")
add_definitions(-DINPUT_FILE_DAY5="${CMAKE_CURRENT_SOURCE_DIR}/input/day5_input.txt")
add_definitions(-DINPUT_FILE_DAY6="${CMAKE_CURRENT_SOURCE_DIR}/input/day6_input.txt")


add_executable(${target} ${source})

target_include_directories(${target} PRIVATE include)