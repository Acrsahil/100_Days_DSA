#include <iostream>
#include <vector>
#include <algorithm>
 
int main()
{
    std::vector<int> v = {2, 1, 3, 6, 7, 9, 8};
 
    auto it = std::minmax_element(v.begin(), v.end());
    int min = *it.first;
    int max = *it.second;
 
    std::cout << min << ", " << max << std::endl;        // 1, 9
 
    return 0;
}