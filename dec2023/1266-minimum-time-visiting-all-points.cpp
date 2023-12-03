// problem-link: https://leetcode.com/problems/minimum-time-visiting-all-points
// problem-id: 1266
// problem-name: Minimum Time Visiting All Points


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
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans = 0;
        for (int i = 1; i < sz(points); ++i)
            ans += max(abs(points[i][0] - points[i-1][0]), abs(points[i][1] - points[i-1][1]));
        return ans;      
    }
};