// ─────────────────────────────────────────────────────────────────────────
// Problem: [PROBLEM NAME HERE]
// Link:    https://leetcode.com/problems/...
// Pattern: [e.g. Two Pointers / Sliding Window / DP - Knapsack]
// Time:    O(?)   Space: O(?)
// ─────────────────────────────────────────────────────────────────────────

#include <bits/stdc++.h> // includes everything — fine for DSA
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

// ──────────────────────────────────────────────────────────────────────────
// YOUR SOLUTION HERE
// ──────────────────────────────────────────────────────────────────────────

class Solution
{
public:
    // Replace with actual function signature from LeetCode
    int solve(vector<int> &nums)
    {
        int n = nums.size();
        // your code here
        return 0;
    }
};

// ──────────────────────────────────────────────────────────────────────────
// TEST CASES — run locally before submitting to LeetCode
// ──────────────────────────────────────────────────────────────────────────
int main()
{
    // Fast I/O (not needed for LeetCode but good habit)
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;

    // ── Test 1 ──
    {
        vector<int> nums = {2, 7, 11, 15};
        int result = sol.solve(nums);
        cout << "Test 1: " << result << " (expected: ...)\n";
    }

    // ── Test 2 — edge case ──
    {
        vector<int> nums = {}; // empty input
        int result = sol.solve(nums);
        cout << "Test 2: " << result << " (expected: ...)\n";
    }

    // ── Test 3 — single element ──
    {
        vector<int> nums = {1};
        int result = sol.solve(nums);
        cout << "Test 3: " << result << " (expected: ...)\n";
    }

    return 0;
}