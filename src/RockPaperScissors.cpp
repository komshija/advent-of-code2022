#include <RockPaperScissors.hpp>


RockPaperScissors::RockPaperScissors(std::shared_ptr<FileReader> file_reader) :
 m_file_reader(file_reader) {}

 int RockPaperScissors::execute() {
    std::string input;
    m_file_reader->get_file_content(input);
    std::stringstream ss(input);
    
    for(std::string line; std::getline(ss, line);) {
    //XYZ - 123
    //0 - lose , 3 - draw, 6 - win
        
    }
 }