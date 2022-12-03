#ifndef _ROCKPAPERSCISSORS_H_
#define _ROCKPAPERSCISSORS_H_

#include <Solution.hpp>
#include <map>

class RockPaperScissors : public Solution {
 private:
  std::string m_file_path;
  std::map<std::string, int> m_calculation;
  std::map<std::string, std::string> m_transformation;

 public:
  RockPaperScissors(std::string file_path);
  ~RockPaperScissors() = default;
  void print_solution() override;

 private:
  int execute_part1();
  int execute_part2();
};
#endif  // _ROCKPAPERSCISSORS_H_