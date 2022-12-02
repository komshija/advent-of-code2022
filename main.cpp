#include <iostream>
#include <FileReader.hpp>

int main() {

    std::string content;
    FileReader input(INPUT_FILE);
    input.get_file_content(content);


    std::cout << content;
}
