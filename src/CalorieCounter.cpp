#include <CalorieCounter.hpp>

namespace adventofcode {

CalorieCounter::CalorieCounter(std::string file) : m_file_path(file) {}

int CalorieCounter::sum_of_top_max_calories(int num) {
  std::stringstream ss(utils::FileReader::get_file_content(m_file_path));
  std::priority_queue<int> max;

  auto acc{0};
  for (std::string line; std::getline(ss, line);) {
    if (line.empty()) {
      max.emplace(acc);
      acc = 0;
      continue;
    }
    acc += atoi(line.c_str());
  }

  acc = 0;
  for (int i{0}; i < num; ++i) {
    acc += max.top();
    max.pop();
  }

  return acc;
}

}  // namespace adventofcode