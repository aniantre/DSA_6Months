#include <bits/stdc++.h>
using namespace std;
// ── Type aliases (saves typing, matches competitive programming style) ──
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using vvii = vector<vector<int>>;

// ── Constants ──
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;
// Pattern: Seen-Before (Hash Map)
// Time: O(n)   Space: O(n)

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> seen; // value → index
        for (int i = 0; i < (int)nums.size(); i++)
        {
            int complement = target - nums[i];
            if (seen.count(complement))
                return {seen[complement], i};
            seen[nums[i]] = i;
        }
        return {};
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution sol;

    // Test 1: [2,7,11,15] target=9 → [0,1]
    {
        vi nums = {2, 7, 11, 15};
        auto res = sol.twoSum(nums, 9);
        cout << "[" << res[0] << "," << res[1] << "] expected [0,1]\n";
    }
    // Test 2: [3,2,4] target=6 → [1,2]
    {
        vi nums = {3, 2, 4};
        auto res = sol.twoSum(nums, 6);
        cout << "[" << res[0] << "," << res[1] << "] expected [1,2]\n";
    }
    return 0;
}