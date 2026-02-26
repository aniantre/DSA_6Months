/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int currentSum = nums[0]; // best subarray ending at current index
        int maxSum = nums[0];     // best subarray seen so far

        for (int i = 1; i < nums.size(); i++)
        {
            currentSum = max(nums[i], currentSum + nums[i]); // Decide whether to start new or extend
            maxSum = max(maxSum, currentSum);                // update global max
        }

        return maxSum;
    }
};
// @lc code=end
