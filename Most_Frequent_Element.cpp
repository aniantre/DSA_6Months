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

class Solution
{
public:
    int mostfrequent(vector<int> &arr)
    {
        unordered_map<int, int> freq;
        for (auto &p : arr)
        {
            /*
            {1->1}
            {2->2}
            {3->3}
            {4->1}
            */
            freq[p]++; // checks the key and then increments its value by 1 if found in map. If not it sets the value to 0 and then increment it by 1
        }
        int maxfreq = 0;
        int element = -1;
        for (auto &pair : freq)
        {
            if (pair.second > maxfreq)
            {
                maxfreq = pair.second;
                element = pair.first;
            }
        }
        return element;
    }
};

int main()
{
    vector<int> arr = {1, 2, 2, 3, 3, 3, 4, 5, 3, 5, 3, 6, 7, 8, 5, 5, 3, 5, 2, 6, 9, 5, 1, 5};
    Solution object;

    int mostfrequentNumber = object.mostfrequent(arr);
    cout << "mostfrequentNumber is " << mostfrequentNumber << endl;

    return 0;
}
