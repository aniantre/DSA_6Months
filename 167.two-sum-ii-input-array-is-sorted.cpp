/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input Array Is Sorted
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        unordered_map<int, int> map;
        for (int i = 0; i < numbers.size(); i++)
        {
            int need = target - numbers[i];
            if (map.count(need))
            {
                return {++map[need], ++i};
            }
            map[numbers[i]] = i;
        }
        return {};
    }
};
// @lc code=end
