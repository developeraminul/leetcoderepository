#include <vector>
using namespace std;
class Solution
{
    public:
        unordered_map<int, int> map;
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map.clear();
        int first;
        int second;
        int x;
        vector<int>::iterator it;
        for (it = nums.begin(); it != nums.end(); it++)
        {
            map.insert(pair<int, int> (*it, it - nums.begin()));
           	//intf("key: %d Value:%d\n", *it, it - nums.begin());
        }

        unordered_map<int, int>::iterator mapIt;

        for (auto it = nums.begin(); it != nums.end(); it++)
        {
            x = target - *it;
            if (map.find(x) != map.end())
            {
                first = it - nums.begin();
                second = map.find(target - *it)->second;
                if (first != second)
                    return {
                        first,
                        second
                    };
            }
        }
        return { 0,
            1 };
    }
};