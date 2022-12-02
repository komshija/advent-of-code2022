#ifndef _ROCKPAPERSCISSORS_H_
#define _ROCKPAPERSCISSORS_H_
#include <FileReader.hpp>
#include <memory>
#include <queue>

class RockPaperScissors
{
private:
    std::shared_ptr<FileReader> m_file_reader;
public:
    RockPaperScissors(std::shared_ptr<FileReader> file_reader);
    ~RockPaperScissors() = default;

    int execute();
};
#endif // _ROCKPAPERSCISSORS_H_