#include <CalorieCounter.hpp>

CalorieCounter::CalorieCounter(std::shared_ptr<FileReader> file_reader) :
 m_file_reader(file_reader) {}

int CalorieCounter::sum_of_top_max_calories(int num = 1) {
    std::string input;
    m_file_reader->get_file_content(input);
    std::stringstream ss(input);
    std::priority_queue<int> max;

    int acc = 0;
    for(std::string line; std::getline(ss, line);) {
        if(line.empty()) {
            max.emplace(acc);
            acc = 0;
            continue;
        }
        acc += atoi(line.c_str());
    }

    acc = 0;
    for(int i{0}; i < num; ++i)  {
        acc += max.top();
        max.pop();
    }

    return acc;
}