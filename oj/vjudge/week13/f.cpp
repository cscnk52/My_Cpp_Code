/*
 * @Author: cscnk52
 * @Date: 2023-01-04 16:58:26
 * @LastEditTime: 2023-01-05 10:14:53
 */
#include <stdio.h>
#include <bits/stdc++.h>
#define IO_ACCELERATE ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(i) (i).begin(),(i).end()
#define init(i) memset(i,0,sizeof(i));
#define rep(i,l,r) for(int i = l;i < (r);i++)
#define req(i,l,r) for(int i = l;i <= (r);i++)
#define LF "\n"
#define MULTI int _T; cin >> _T; while(_T--)
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
const int INF = 1e9;



int main() {
    IO_ACCELERATE;

    int n, w[101], v[101], p, dp[10010];
    init(dp);
    cin >> n >> p;
    req(i, 1, n) {
        cin >> w[i] >> v[i];
    }
    req(i, 1, n)
        for (int l = p; l >= w[i]; l--) {
            dp[l] = max(dp[l], dp[l - w[i]] + v[i]);
        }

    cout << dp[p];

    return 0;
}