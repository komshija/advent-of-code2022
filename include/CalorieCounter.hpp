#ifndef _CALORIECOUNTER_H_
#define _CALORIECOUNTER_H_
#include <FileReader.hpp>
#include <memory>

class CalorieCounter
{
private:
    std::shared_ptr<FileReader> m_file_reader;
public:
    CalorieCounter(std::shared_ptr<FileReader> file_reader);
    ~CalorieCounter() = default;
    std::string execute();
};
#endif // _CALORIECOUNTER_H_