#include <vector>
#include <iostream>
#include <algorithm>

#include "print.h"

using std::cout;
using std::for_each;

namespace app
{
    void printIterator(std::vector<int>::iterator begin, std::vector<int>::iterator end)
    {
        for_each(begin, end, [](const int element) { cout << element << " "; });
    }

    void printVector(std::vector<int>::iterator begin, std::vector<int>::iterator end)
    {
        cout << "Values: ";
        printIterator(begin, end);
        cout << std::endl;
    }

    void printVector(std::vector<int> vector)
    {
        cout << "Values: ";
        printIterator(vector.begin(), vector.end());
        cout << std::endl;
    }
} 
