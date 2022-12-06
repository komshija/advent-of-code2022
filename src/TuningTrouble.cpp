#include <TuningTrouble.hpp>

namespace adventofcode {

TuningTrouble::TuningTrouble(std::string file_path) : m_file_path(file_path) {}

std::string TuningTrouble::execute_part1() {
  return find_non_repeating(4);
}

std::string TuningTrouble::execute_part2() {
  return find_non_repeating(14);
}

std::string TuningTrouble::find_non_repeating(int lenght_of_sequence) {
  auto found_all_different_characters = [&](std::string::iterator begin,
                                            std::string::iterator end) -> bool {
    // FIXME: Optimize
    auto br{0};
    auto it{begin};
    while (it != end) {
      br += std::count(begin, end, *it);
      it++;
    }
    return br == lenght_of_sequence;
  };

  std::stringstream ss(utils::FileReader::get_file_content(m_file_path));
  std::string line;
  std::getline(ss, line);

  auto begin = line.begin();
  auto end = line.begin() + lenght_of_sequence;
  while (end != line.end()) {
    if (found_all_different_characters(begin, end)) {
      return std::to_string(end - line.begin());
    }
    begin++;
    end++;
  }

  return {};
}

}  // namespace adventofcode