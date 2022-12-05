#include <SupplyStacks.hpp>

namespace adventofcode {
SupplyStacks::SupplyStacks(std::string file_path) : m_file_path(file_path) {}

std::string SupplyStacks::execute_common(
    std::function<void(std::vector<std::stack<char>>&, Movement&)>
        move_container) {
  auto tokenize = [](std::string line) -> std::vector<char> {
    std::vector<char> result{};
    for (int index{0}; index < line.length(); index += 4) {
      auto token = line.substr(index, index + 3);
      result.push_back(token[1]);
    }
    return result;
  };

  auto parse_movement = [](std::string line) -> Movement {
    const std::string move{"move "};
    const std::string from{" from "};
    const std::string to{" to "};

    return {stoi(line.substr(move.length(), move.length() - line.find(from))),
            stoi(line.substr(line.find(from) + from.length(),
                             line.find(from) + from.length() - line.find(to))),
            stoi(line.substr(line.find(to) + to.length()))};
  };

  std::stringstream ss(utils::FileReader::get_file_content(m_file_path));
  std::vector<std::stack<char>> supplies{};
  bool initializationPassed{false};
  int num_of_stacks = -1;

  for (std::string line; std::getline(ss, line);) {
    if (num_of_stacks == -1) {
      num_of_stacks = (line.length() + 1) / 4;
      supplies.resize(num_of_stacks);
    }
    if (line.empty()) {
      initializationPassed = true;
      for (auto& stack : supplies) {
        std::stack<char> temp;
        while (!stack.empty()) {
          temp.push(stack.top());
          stack.pop();
        }
        stack = temp;
      }
      continue;
    }

    if (!initializationPassed) {
      if (line.find('[') == std::string::npos)
        continue;

      int i{0};
      for (auto crate : tokenize(line)) {
        if (crate != ' ')
          supplies[i].push(crate);
        i++;
      }
    } else {
      auto move{parse_movement(line)};
      move_container(supplies, move);
    }
  }
  std::string crates_on_top{};
  for (auto stack : supplies) {
    auto crate{stack.top()};
    crates_on_top += crate;
  }

  return crates_on_top;
}

std::string SupplyStacks::execute_part1() {
  return execute_common(
      [](std::vector<std::stack<char>>& supplies, Movement& move) {
        for (auto times{0}; times < move.num_of_times; ++times) {
          auto crate{supplies[move.from_stack - 1].top()};
          supplies[move.from_stack - 1].pop();
          supplies[move.to_stack - 1].push(crate);
        }
      });
}

std::string SupplyStacks::execute_part2() {
  return execute_common(
      [](std::vector<std::stack<char>>& supplies, Movement& move) {
        std::stack<char> temp;
        for (auto times{0}; times < move.num_of_times; ++times) {
          auto crate{supplies[move.from_stack - 1].top()};
          supplies[move.from_stack - 1].pop();
          temp.push(crate);
        }
        while (!temp.empty()) {
          supplies[move.to_stack - 1].push(temp.top());
          temp.pop();
        }
      });
}

}  // namespace adventofcode
