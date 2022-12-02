#include <CalorieCounter.hpp>

CalorieCounter::CalorieCounter(std::shared_ptr<FileReader> file_reader) :
 m_file_reader(file_reader) {}

std::priority_queue<int> CalorieCounter::execute() {
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

    return max;
}