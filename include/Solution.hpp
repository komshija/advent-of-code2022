#ifndef _SOLUTION_H_
#define _SOLUTION_H_
#include <FileReader.hpp>
#include <iostream>
namespace adventofcode {

class Solution {
 public:
  void print_solution();
  virtual std::string execute_part1() = 0;
  virtual std::string execute_part2() = 0;
  virtual int day() = 0;
  virtual ~Solution() = default;
};

}  // namespace adventofcode
#endif  // _SOLUTION_H_