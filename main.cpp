#include <iostream>
#include <FileReader.hpp>
#include <CalorieCounter.hpp>
#include <RockPaperScissors.hpp>

int main() {
    // Day 1
    // CalorieCounter cc{std::make_shared<FileReader>(INPUT_FILE_DAY1)};
    // auto day1_first_result {cc.sum_of_top_max_calories()};
    // auto day1_second_result {cc.sum_of_top_max_calories(3)};
    // std::cout << day1_first_result << std::endl;
    // std::cout << day1_second_result << std::endl;


    // Day 2
    RockPaperScissors rps{std::make_shared<FileReader>(INPUT_FILE_DAY2)};
    std::cout << rps.execute_part1() << std::endl;
    std::cout << rps.execute_part2() << std::endl;
}
