// Link: https://leetcode.com/problems/number-of-ways-to-divide-a-long-corridor/
// Problem id: 2147
// Problem name: Number of Ways to Divide a Long Corridor
// time complexity: O(n)
// space complexity: O(n)


#include <bits/stdc++.h>

using namespace std;
#define fast ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
#define ll long long
#define fi first
#define se second
#define all(v) (v).begin(), (v).end()
#define sz(x) (int)(x).size()
const int MOD = 1e9 + 7;


class Solution {
public:
    int mul(int x, int y) {
        return (1LL * x * y) % MOD;
    }
    int numberOfWays(string corridor) {
        int cnt = 0;
        for (char c : corridor)
            cnt += (c == 'S');
        // check for invalid case
        if (cnt & 1 || !cnt)
            return 0;
        cnt = 0;
        vector<int> v[2];
        for (int i = 0; i < sz(corridor); ++i) {
            if (corridor[i] == 'S') {
                v[cnt&1].push_back(i);
                cnt++;
            }
        }
        int ans = 1;
        for (int i = 1; i < sz(v[0]); ++i) {
            ans = mul(ans,v[0][i] - v[1][i-1] + 1);
        }
        return ans;

    }
};

