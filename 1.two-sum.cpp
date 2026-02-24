/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> map;
        for (int i = 0; i < (int)nums.size(); i++)
        {
            int sum = target - nums[i];
            if (map.count(sum))
            {
                return {map[sum], i};
            }
            map[nums[i]] = i;
        }
        return {};
    }
};
// @lc code=end
