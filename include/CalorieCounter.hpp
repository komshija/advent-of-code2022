#ifndef _CALORIECOUNTER_H_
#define _CALORIECOUNTER_H_
#include <FileReader.hpp>
#include <Solution.hpp>
#include <memory>
#include <queue>

class CalorieCounter : public Solution
{
private:
    std::string m_file_path;
public:
    CalorieCounter(std::string file_path);
    ~CalorieCounter() = default;
    void print_solution() override;
private:
    int sum_of_top_max_calories(int num = 1);
};
#endif // _CALORIECOUNTER_H_