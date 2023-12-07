// problem-link: https://leetcode.com/problems/largest-odd-number-in-string/

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
    string largestOddNumber(string num) {
        while (!num.empty() && (num.back() - '0') & 1 ^ 1)
            num.pop_back();
        return num;
    }
};