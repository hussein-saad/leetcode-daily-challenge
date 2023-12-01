// problem-link: https://leetcode.com/problems/number-of-1-bits
// problem-id: 191
// problem-name: Number of 1 Bits
// time-complexity: O(log(n))
// space-complexity: O(1)

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
    int hammingWeight(uint32_t n) {
        int ans = 0;
        while (n){
            n = n & (n-1);
            ans++;
        }
        return ans;
    }
};