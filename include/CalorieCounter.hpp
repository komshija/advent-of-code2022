#ifndef _CALORIECOUNTER_H_
#define _CALORIECOUNTER_H_
#include <Solution.hpp>
#include <queue>
namespace adventofcode {

class CalorieCounter : public Solution {
 private:
  std::string m_file_path;
 public:
  CalorieCounter(std::string file_path);
  ~CalorieCounter() = default;
  std::string execute_part1() override { return std::to_string(sum_of_top_max_calories(1)); }
  std::string execute_part2() override { return std::to_string(sum_of_top_max_calories(3)); }
  int day() override { return 1; }
 private:
  int sum_of_top_max_calories(int num = 1);
};

}  // namespace adventofcode
#endif  // _CALORIECOUNTER_H_