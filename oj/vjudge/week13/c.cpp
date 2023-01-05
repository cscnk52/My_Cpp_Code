/*
 * @Author: cscnk52
 * @Date: 2023-01-03 15:47:32
 * @LastEditTime: 2023-01-03 21:03:32
 */
#include <stdio.h>
#include <bits/stdc++.h>
#define ACCELERATE ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(i) (i).begin(),(i).end()
#define rep(i,l,r) for(int i = l;i < (r);i++)
#define req(i,l,r) for(int i = l;i <= (r);i++)
#define LF "\n"
#define MULTI int _T; cin >> _T; while(_T--)
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
const int INF = 1e9;



int main() {
    ACCELERATE;

    string a, b, ans;
    cin >> a >> b;
    int len1 = a.length(), len2 = b.length();
    int dp[len1 + 1][len2 + 1];
    memset(dp, 0, sizeof(dp));
    req(i, 1, len1) {
        req(j, 1, len2) {
            if (a[i - 1] == b[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    int len = dp[len1][len2];
    while (dp[len1][len2]) {
        if (dp[len1][len2] == dp[len1 - 1][len2])
            len1--;
        else if (dp[len1][len2] == dp[len1][len2 - 1])
            len2--;
        else {
            ans.push_back(a[len1 - 1]);
            len1--, len2--;
        }
    }
    for (int i = len - 1;i >= 0;i--) {
        printf("%c", ans[i]);
    }

    return 0;
}