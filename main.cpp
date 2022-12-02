#include <iostream>
#include <FileReader.hpp>
#include <CalorieCounter.hpp>

int main() {

    CalorieCounter cc{std::make_shared<FileReader>(INPUT_FILE)};


    std::cout << cc.execute();
}
