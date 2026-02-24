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
    int subarray(vector<int> &nums, int target)
    {
        unordered_map<int, int> map; // value → index
        int prefix = 0;
        int sum_count = 0;
        map[0] = 1; // as we are starting the for loop from 0th index..we have to store 0 in map initially

        for (auto i : nums)
        {
            prefix += i;
            int need_prefix = prefix - target;
            if (map.count(need_prefix))
            {
                sum_count += map[need_prefix];
            }
            map[prefix]++;
        }
        return sum_count;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution sol;

    {
        vi nums = {-1, 4, 2, 1};
        auto res = sol.subarray(nums, 3);
        cout << "[" << res << "] expected 2\n";
    }
    // Test 1:
    {
        vi nums = {1, 7, -1, 8, -8, 8, 0, 8};
        auto res = sol.subarray(nums, 8);
        cout << "[" << res << "] expected 9\n";
    }
    // Test 2:
    {
        vi nums = {2, 2, -2, 4, 2, 1};
        auto res = sol.subarray(nums, 4);
        cout << "[" << res << "] expected 4\n";
    }
    // Test 3:
    {
        vi nums = {4, 5, 4, 3, 1, -4, 4, 5, 3};
        auto res = sol.subarray(nums, 8);
        cout << "[" << res << "] expected 4\n";
    }
    // Test 4:
    {
        vi nums = {2, -2, 4, 0, 4, -4, 8};
        auto res = sol.subarray(nums, 8);
        cout << "[" << res << "] expected 5\n";
    }
    return 0;
}
