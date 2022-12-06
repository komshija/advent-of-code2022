#ifndef _TUNING_TROUBLE_H_
#define _TUNING_TROUBLE_H_
#include <FileReader.hpp>
#include <Solution.hpp>
namespace adventofcode {

class TuningTrouble : public Solution {
 private:
  std::string m_file_path;
 public:
  TuningTrouble(std::string file_path);
  ~TuningTrouble() = default;
  std::string execute_part1() override;
  std::string execute_part2() override;
  int day() override { return 6; }
private:
  std::string find_non_repeating(int lenght_of_sequence);
};

}  // namespace adventofcode
#endif  // _TUNING_TROUBLE_H_