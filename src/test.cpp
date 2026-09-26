#include <vector>
#include <algorithm>

#include "print.h"

void quicksort(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (begin == end)
        return;

    app::printVector(begin, end);

    auto pivot = *std::next(begin, std::distance(begin, end) / 2);
    const auto lessThan = std::partition(begin, end, [pivot](const auto &element) { return element < pivot; });
    const auto greaterThan = std::partition(lessThan, end, [pivot](const auto &element) { return !(pivot < element); });

    quicksort(begin, lessThan);
    quicksort(greaterThan, end);
}

int main()
{
    std::vector<int> values{6, 8, 1, 2, 5};

    app::printVector(values);
    quicksort(values.begin(), values.end());
    app::printVector(values);

    return 0;
}
