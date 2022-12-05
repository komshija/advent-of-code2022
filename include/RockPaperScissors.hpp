#ifndef _ROCKPAPERSCISSORS_H_
#define _ROCKPAPERSCISSORS_H_
#include <Solution.hpp>
#include <map>

namespace adventofcode {

class RockPaperScissors : public Solution {
 private:
  std::string m_file_path;
  std::map<std::string, int> m_calculation;
  std::map<std::string, std::string> m_transformation;

 public:
  RockPaperScissors(std::string file_path);
  ~RockPaperScissors() = default;

  std::string execute_part1() override;
  std::string execute_part2() override;

  int day() override { return 2; }
};

}  // namespace adventofcode
#endif  // _ROCKPAPERSCISSORS_H_