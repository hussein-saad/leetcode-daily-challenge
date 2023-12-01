// problem-link: https://leetcode.com/problems/minimum-one-bit-operations-to-make-integers-zero
// problem-id: 1611
// problem-name: Minimum Number of One Bits Operations to Make Integers Zero
// time-complexity: O(30*log(n))
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
    ll solve(int n){
        if (n <= 1)
            return n;
        int msb = 0;
        for (int i = 30; i >= 0;i--)
            if (n & (1 << i)){
                msb = i;
                break;
            }
        return (1LL << (msb + 1)) - 1 - solve(n & (~(1 << msb)));
    }
    int minimumOneBitOperations(int n) {
        return solve(n);
    }
};