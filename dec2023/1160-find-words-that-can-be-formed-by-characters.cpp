// problem-link: https://leetcode.com/problems/find-words-that-can-be-formed-by-characters
// problem-id: 1160
// problem-name: Find Words That Can Be Formed by Characters


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
    int countCharacters(vector<string>& words, string chars) {
        int mp_chars[26] = {0};
        for (auto &i : chars)
            mp_chars[i-'a']++;
        int ans = 0;
        for (int i = 0; i < sz(words);i++){
            int mp_words[26] = {0};
            for (auto &j : words[i])
                mp_words[j-'a']++;
            bool ch = true;
            for (int j = 0; j < 26;j++){
                if (mp_chars[j] < mp_words[j]){
                    ch = false;
                    break;
                }
            }
            if (ch)
                ans+=sz(words[i]);
        }
        return ans;      
    }
};