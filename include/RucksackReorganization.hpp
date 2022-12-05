#ifndef _RUCKSACK_REOGRANIZATION_H_
#define _RUCKSACK_REOGRANIZATION_H_
#include <Solution.hpp>
#include <functional>
namespace adventofcode {

class RucksackReorganization : public Solution {
 private:
  std::string m_file_path;
  std::function<bool(std::string, char)> m_contains;
  std::function<int(char)> m_itemPriority;
 public:
  RucksackReorganization(std::string file_path);
  ~RucksackReorganization() = default;
  std::string execute_part1() override;
  std::string execute_part2() override;
  int day() override { return 3; }
};

}  // namespace adventofcode
#endif  // _RUCKSACK_REOGRANIZATION_H_