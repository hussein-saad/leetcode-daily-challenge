// problem-link: https://leetcode.com/problems/count-of-matches-in-tournament/

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
    int numberOfMatches(int n) {
        int ans = 0;
        while (n > 1){
            ans += n / 2;
            if (n & 1)
                n++;
            n/=2;
        }
        return ans;
    }
};