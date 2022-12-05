#ifndef _SUPPLY_STACKS_H_
#define _SUPPLY_STACKS_H_
#include <FileReader.hpp>
#include <Solution.hpp>
#include <functional>
#include <stack>
#include <vector>
namespace adventofcode {

class SupplyStacks : public Solution {
 private:
  std::string m_file_path;
  struct Movement {
    int num_of_times;
    int from_stack;
    int to_stack;
  };
 public:
  SupplyStacks(std::string file_path);
  ~SupplyStacks() = default;
  std::string execute_part1() override;
  std::string execute_part2() override;
  int day() override { return 5; }
 private:
  std::string execute_common(std::function<void(std::vector<std::stack<char>>&, Movement&)>);
};

}  // namespace adventofcode
#endif  // _SUPPLY_STACKS_H_