#include <CampCleanup.hpp>

namespace adventofcode {

CampCleanup::CampCleanup(std::string file_path)
    : m_file_path(file_path),
      m_parse([](std::string line) -> pair_section_t {
        typedef std::pair<std::string, std::string> string_pair_t;

        auto split = [](std::string input, char delimiter) -> string_pair_t {
          auto comma_pos = input.find(delimiter);
          return {input.substr(0, comma_pos),
                  input.substr(comma_pos + 1, input.length() - comma_pos)};
        };

        auto string_to_section = [](string_pair_t value) -> section_t {
          return {std::stoi(value.first), std::stoi(value.second)};
        };

        auto sections = split(line, ',');

        return {string_to_section(split(sections.first, '-')),
                string_to_section(split(sections.second, '-'))};
      }),
      m_is_full_intersection([](pair_section_t value) -> bool {
        return (value.second.first >= value.first.first &&
                value.first.second >= value.second.second) ||
               (value.first.first >= value.second.first &&
                value.second.second >= value.first.second);
      }),
      m_is_intersection([](pair_section_t value) -> bool {
        return std::max(value.first.first, value.second.first) <=
               std::min(value.first.second, value.second.second);
      }) {}

int CampCleanup::execute_part1() {
  std::stringstream ss(utils::FileReader::get_file_content(m_file_path));
  int acc = 0;
  for (std::string line; std::getline(ss, line);) {
    if (m_is_full_intersection(m_parse(line)))
      acc++;
  }
  return acc;
}

int CampCleanup::execute_part2() {
  std::stringstream ss(utils::FileReader::get_file_content(m_file_path));
  int acc = 0;
  for (std::string line; std::getline(ss, line);) {
    if (m_is_intersection(m_parse(line)))
      acc++;
  }
  return acc;
}

void CampCleanup::print_solution() {
  std::cout << "=== Day 4 ===" << std::endl;
  std::cout << execute_part1() << std::endl;
  std::cout << execute_part2() << std::endl;
  std::cout << std::endl;
}

}  // namespace adventofcode
