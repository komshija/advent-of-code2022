#include <RucksackReorganization.hpp>
#include <array>
#include <vector>

namespace adventofcode {

RucksackReorganization::RucksackReorganization(std::string file_path)
    : m_file_path(file_path),
      m_contains([](std::string str, char ch) -> bool {
        return str.find(ch) != std::string::npos;
      }),
      m_itemPriority([](char ch) -> int {
        return isupper(ch) ? (27 + ch - 'A') : (ch - 'a' + 1);
      }) {}

int RucksackReorganization::execute_part1() {
  std::stringstream ss(utils::FileReader::get_file_content(m_file_path));
  int acc = 0;
  for (std::string line; std::getline(ss, line);) {
    std::string first{line.substr(0, line.length() / 2)};
    std::string second{line.substr(line.length() / 2, line.length() / 2)};

    for (auto& ch : first) {
      if (m_contains(second, ch)) {
        acc += m_itemPriority(ch);
        break;
      }
    }
  }
  return acc;
}

int RucksackReorganization::execute_part2() {
  std::stringstream ss(utils::FileReader::get_file_content(m_file_path));
  std::vector<std::string> lines;
  int acc = 0;
  for (std::string line; std::getline(ss, line);) {
    lines.push_back(line);

    if (lines.size() == 3) {
      auto first = lines[0];
      auto second = lines[1];
      auto third = lines[2];

      for (auto& ch : first) {
        if (m_contains(second, ch) && m_contains(third, ch)) {
          acc += m_itemPriority(ch);
          break;
        }
      }

      lines.clear();
    }
  }
  return acc;
}

void RucksackReorganization::print_solution() {
  std::cout << "=== Day 3 ===" << std::endl;
  std::cout << execute_part1() << std::endl;
  std::cout << execute_part2() << std::endl;
  std::cout << std::endl;
}

}  // namespace adventofcode