/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {

        for (int i = 0; i < nums.size(); i++)
        {
            if (target < nums[i])
                return 0;
            if (nums[i] == target)
                return i;
            if (i == nums.size() - 1)
                return nums.size();
            if (target < nums[i + 1] && target > nums[i])
                return ++i;
        }
        return 0;
    }
};
// @lc code=end
