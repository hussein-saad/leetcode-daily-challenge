// problem-link: https://leetcode.com/problems/calculate-money-in-leetcode-bank/
    

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
    int totalMoney(int n) {
        int ans = 0;
        int div = n / 7;
        int mod = n%7;
        ans += 28*div + 7 * (div*(div-1) / 2);
        ans += (div + 1 + div + mod) * (mod) / 2;
        return ans;
    }
};