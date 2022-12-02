#include <iostream>
#include <FileReader.hpp>
#include <CalorieCounter.hpp>

int main() {

    CalorieCounter cc{std::make_shared<FileReader>(INPUT_FILE_DAY1)};
    auto max_queue {cc.execute()};

    int acc = 0;
    for(int i{0}; i < 3; ++i)  {
        acc+= max_queue.top();
        max_queue.pop();
    }
    std::cout << acc << std::endl;
   // std::cout << cc.execute();
}
