// problem link: https://leetcode.com/problems/knight-dialer/
// problem id: 935
// problem name: Knight Dialer
// time complexity: O(8 * 4 * 3 * n)
// space complexity: O(8 * 4 * 3 * n)


#include <bits/stdc++.h>

using namespace std;
#define fast ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
#define ll long long
#define fi first
#define se second
#define all(v) (v).begin(), (v).end()
#define sz(x) (int)(x).size()
const int MOD = 1e9 + 7;

int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};

const int N = 5e3 + 10;

int dp[4][3][N];
char grid[4][3];

class Solution {
public:
    int add(int x, int y) {
        return (0LL + x + y) % MOD;
    }

    bool is_valid(int i, int j) {
        return i >= 0 && i < 4 && j >= 0 && j < 3 && grid[i][j] != '*' && grid[i][j] != '#';
    }

    int solve(int i, int j, int cnt) {
        if (cnt <= 0)
            return cnt == 0 ? 1 : 0;
        int &ret = dp[i][j][cnt];
        if (~ret)
            return ret;
        ret = 0;
        for (int k = 0; k < 8; ++k) {
            int x = i + dx[k];
            int y = j + dy[k];
            if (is_valid(x, y))
                ret = add(ret, solve(x, y, cnt - 1));
            else solve(x, y, -10);
        }
        return ret;
    }

    int knightDialer(int n) {
        memset(dp, -1, sizeof dp);
        int cnt = 1;
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 3; ++j)
                grid[i][j] = (cnt++ + '0');
        }
        grid[3][0] = '*';
        grid[3][2] = '#';
        grid[3][1] = '0';

        int ans = 0;
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 3; ++j)
                if (grid[i][j] != '*' && grid[i][j] != '#')
                    ans = add(ans, solve(i, j, n - 1));
        }
        
        return ans;
    }
};
