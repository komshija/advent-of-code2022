#ifndef _RUCKSACK_REOGRANIZATION_H_
#define _RUCKSACK_REOGRANIZATION_H_

#include <Solution.hpp>
#include <functional>

class RucksackReorganization : public Solution {
 private:
  std::string m_file_path;
  std::function<bool(std::string, char)> m_contains;
  std::function<int(char)> m_itemPriority;

 public:
  RucksackReorganization(std::string file_path);
  ~RucksackReorganization() = default;

  void print_solution() override;

 private:
  int execute_part1();
  int execute_part2();
};

#endif  // _RUCKSACK_REOGRANIZATION_H_