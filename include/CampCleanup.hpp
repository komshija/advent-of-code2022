#ifndef _CAMPCLEANUP_H_
#define _CAMPCLEANUP_H_
#include <FileReader.hpp>
#include <Solution.hpp>
#include <functional>
#include <utility>
namespace adventofcode {

class CampCleanup : public Solution {
 public:
  typedef std::pair<int, int> section_t;
  typedef std::pair<section_t, section_t> pair_section_t;
 private:
  std::string m_file_path;
  std::function<pair_section_t(std::string)> m_parse;
  std::function<bool(pair_section_t)> m_is_full_intersection;
  std::function<bool(pair_section_t)> m_is_intersection;
 public:
  CampCleanup(std::string file_path);
  ~CampCleanup() = default;
  std::string execute_part1() override;
  std::string execute_part2() override;
  int day() override { return 4; }
};

}  // namespace adventofcode
#endif  // _CAMPCLEANUP_H_