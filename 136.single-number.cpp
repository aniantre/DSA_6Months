/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */

// @lc code=start
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int result = 0;
        for (int x : nums)
        {
            result ^= x; // XOR  -->result - x--> example: 2-3--> 010-011-->001-->1 is result
        }
        return result;
    }
};
// @lc code=end
