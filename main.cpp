#include <CalorieCounter.hpp>
#include <RockPaperScissors.hpp>
#include <vector>

int main() {
    std::vector<std::unique_ptr<Solution>> solutions;

    solutions.push_back(std::make_unique<CalorieCounter>(INPUT_FILE_DAY1));
    solutions.push_back(std::make_unique<RockPaperScissors>(INPUT_FILE_DAY2));
    

    for(auto& solution : solutions) {
        solution->print_solution();
    }

}
