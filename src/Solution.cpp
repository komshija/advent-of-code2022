 #include <Solution.hpp>

 namespace adventofcode {
 void Solution::print_solution()
 {
     std::cout << "=== Day" << day() << " ===" << std::endl;
    std::cout << execute_part1() << std::endl;
    std::cout << execute_part2() << std::endl;
    std::cout << std::endl;
  }
 }