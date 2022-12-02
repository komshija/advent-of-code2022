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
    int sum_of_top_max_calories(int num = 1);
};
#endif // _CALORIECOUNTER_H_