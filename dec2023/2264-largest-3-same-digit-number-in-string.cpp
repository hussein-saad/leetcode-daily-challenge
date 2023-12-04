// problem-link: https://leetcode.com/problems/largest-3-same-digit-number-in-string


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
    string largestGoodInteger(string num) {
        string ans = "";
        for (int i = 0; i < sz(num) - 2;i++){
            if (num[i] == num[i + 1] && num[i + 1] == num[i + 2])
                ans = max(ans,num.substr(i,3));
        }
        return ans;
    }
};