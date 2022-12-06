#include <CalorieCounter.hpp>
#include <CampCleanup.hpp>
#include <RockPaperScissors.hpp>
#include <RucksackReorganization.hpp>
#include <SupplyStacks.hpp>
#include <TuningTrouble.hpp>
#include <vector>

using namespace adventofcode;

int main() {
  std::vector<std::unique_ptr<Solution>> solutions;

  solutions.push_back(std::make_unique<CalorieCounter>(INPUT_FILE_DAY1));
  solutions.push_back(std::make_unique<RockPaperScissors>(INPUT_FILE_DAY2));
  solutions.push_back(
      std::make_unique<RucksackReorganization>(INPUT_FILE_DAY3));
  solutions.push_back(std::make_unique<CampCleanup>(INPUT_FILE_DAY4));
  solutions.push_back(std::make_unique<SupplyStacks>(INPUT_FILE_DAY5));
  solutions.push_back(std::make_unique<TuningTrouble>(INPUT_FILE_DAY6));

  for (auto& solution : solutions) {
    solution->print_solution();
  }
}
