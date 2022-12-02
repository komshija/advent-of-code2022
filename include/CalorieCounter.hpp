#ifndef _CALORIECOUNTER_H_
#define _CALORIECOUNTER_H_
#include <FileReader.hpp>
#include <memory>
#include <queue>

class CalorieCounter
{
private:
    std::shared_ptr<FileReader> m_file_reader;
public:
    CalorieCounter(std::shared_ptr<FileReader> file_reader);
    ~CalorieCounter() = default;
    std::priority_queue<int> execute();
};
#endif // _CALORIECOUNTER_H_