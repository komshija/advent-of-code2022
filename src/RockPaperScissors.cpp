#include <RockPaperScissors.hpp>
#include <iostream>

RockPaperScissors::RockPaperScissors(std::shared_ptr<FileReader> file_reader) :
 m_file_reader(file_reader) 
 {

   // A X - rock
   // B Y - paper
   // C Z - scissors

    m_calculation["A Z"] = 3;
    m_calculation["C X"] = 7;
    m_calculation["B X"] = 1;
    m_calculation["A Y"] = 8;
    m_calculation["C Y"] = 2;
    m_calculation["B Z"] = 9;
    m_calculation["A X"] = 4;
    m_calculation["B Y"] = 5;
    m_calculation["C Z"] = 6;

   // X - lose
   // Y - draw
   // Z - win

    m_transformation["A Z"] = "A Y";
    m_transformation["C X"] = "C Y";
    m_transformation["B X"] = "B X";
    m_transformation["A Y"] = "A X";
    m_transformation["C Y"] = "C Z";
    m_transformation["B Z"] = "B Z";
    m_transformation["A X"] = "A Z";
    m_transformation["B Y"] = "B Y";
    m_transformation["C Z"] = "C X";
 }

 int RockPaperScissors::execute_part1() {
    std::string input;
    m_file_reader->get_file_content(input);
    std::stringstream ss(input);
    
    int res = 0;
    for(std::string line; std::getline(ss, line);) {
      res += m_calculation[line];
    }

    return res;
 }

  int RockPaperScissors::execute_part2() {
    std::string input;
    m_file_reader->get_file_content(input);
    std::stringstream ss(input);
    
    int res = 0;
    for(std::string line; std::getline(ss, line);) {
      res += m_calculation[m_transformation[line]];
    }

    return res;
 }