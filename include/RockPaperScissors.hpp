#ifndef _ROCKPAPERSCISSORS_H_
#define _ROCKPAPERSCISSORS_H_
#include <FileReader.hpp>
#include <memory>
#include <map>


class RockPaperScissors
{
private:
    std::shared_ptr<FileReader> m_file_reader;
    std::map<std::string, int> m_calculation;
    std::map<std::string, std::string> m_transformation;
public:
    RockPaperScissors(std::shared_ptr<FileReader> file_reader);
    ~RockPaperScissors() = default;

    int execute_part1();
    int execute_part2();
};
#endif // _ROCKPAPERSCISSORS_H_