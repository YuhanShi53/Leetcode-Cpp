/* Leetcode 881 - Boats to Save People

https://leetcode.com/problems/boats-to-save-people/

1. Time: O(nlogn) Memory: O(1)

*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution1
// 1. Sort | Two-Pointers
{
public:
    int num_rescue_boats(vector<int> &people, int limit)
    {
        int i, j;
        std::sort(people.rbegin(), people.rend());
        for (i = 0, j = people.size() - 1; i <= j; ++i)
            if (people[i] + people[j] <= limit)
                j--;
        return i;
    }
};

int main()
{
    std::vector<int> people{3, 2, 2, 1};
    int limits = 3;
    int res = Solution1().num_rescue_boats(people, limits);
    cout << res << std::endl;
    return 1;
}
