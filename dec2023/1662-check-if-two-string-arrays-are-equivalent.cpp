// problem-link: https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent
// problem-id: 1662
// problem-name: Check If Two String Arrays are Equivalent


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
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1= "",str2 = "";
        for (auto &i : word1)
            str1+=i;
        for (auto &i : word2)
            str2+=i;
        return str1 == str2;
    }
};