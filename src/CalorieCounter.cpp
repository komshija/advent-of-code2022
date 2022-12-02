#include <CalorieCounter.hpp>

CalorieCounter::CalorieCounter(std::shared_ptr<FileReader> file_reader) :
 m_file_reader(file_reader) {}

std::string CalorieCounter::execute() {
    std::string input;
    m_file_reader->get_file_content(input);
    std::stringstream ss(input);

    int elves_num = 1;
    int acc = 0;
    int max_acc, max_num;
    for(std::string line; std::getline(ss, line);) {
        if(line.empty()) {
            if(elves_num == 1) {
                max_acc = acc;
                max_num = elves_num;
            }
            else if(acc > max_acc) {
                max_acc = acc;
                max_num = elves_num;
            }
            
            acc = 0;
            elves_num++;
            continue;
        }
        acc += atoi(line.c_str());
    }

    return std::to_string(max_acc);
}