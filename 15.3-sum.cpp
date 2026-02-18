/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for (int i = 0; i<nums.size(); i++){
            int needed = ta- nums[i];
            if (map.count(needed)){
                return {map[needed], i};
            }
            map[nums[i]] = i;
        }
        return {};
    }
};
// @lc code=end

