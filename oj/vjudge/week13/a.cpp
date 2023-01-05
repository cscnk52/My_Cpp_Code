/*
 * @Author: cscnk52
 * @Date: 2023-01-03 10:47:44
 * @LastEditTime: 2023-01-03 11:38:33
 */
#include <stdio.h>
#include <bits/stdc++.h>
#define rep(i,l,r) for(int i = l;i < (r);i++)
#define req(i,l,r) for(int i = l;i <= (r);i++)
#define all(i) (i).begin(),(i).end()
#define LF "\n"
#define MULTI int _T; cin >> _T; while(_T--)
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
const int INF = 1e9;

int a[110][110], dp[110][110];
int ans = -0x3f3f3f3f;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    req(i, 1, n) {
        req(j, 1, i) {
                cin >> a[i][j];
            }
        }
        
        req(i, 1, n) {
        dp[i][i + 1] = ans;
        dp[i][0] = ans;
    }
    req(i, 1, n) {
        req(j, 1, i) {
            dp[i][j] = max(dp[i - 1][j] + a[i][j], dp[i - 1][j - 1] + a[i][j]);
        }
    }
    req(i, 1, n) {
        ans = max(ans, dp[n][i]);
    }

    cout << ans;

    return 0;
}