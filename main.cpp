#include <CalorieCounter.hpp>
#include <RockPaperScissors.hpp>
#include <RucksackReorganization.hpp>
#include <vector>

int main() {
    std::vector<std::unique_ptr<Solution>> solutions;

    solutions.push_back(std::make_unique<CalorieCounter>(INPUT_FILE_DAY1));
    solutions.push_back(std::make_unique<RockPaperScissors>(INPUT_FILE_DAY2));
    solutions.push_back(std::make_unique<RucksackReorganization>(INPUT_FILE_DAY3));
    
    for(auto& solution : solutions) {
        solution->print_solution();
    }

}
