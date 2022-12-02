#ifndef _SOLUTION_H_
#define _SOLUTION_H_
#include <iostream>

class Solution
{
public:
    virtual void print_solution() = 0;
    virtual ~Solution() = default;
};

#endif // _SOLUTION_H_