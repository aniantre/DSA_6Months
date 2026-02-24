/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> set_container;
        for (int x : nums)
        {
            if (set_container.count(x))
                return true;
            set_container.insert(x);
        }
        return false;
    }
};
// @lc code=end
