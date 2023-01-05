/*
 * @Author: cscnk52
 * @Date: 2023-01-03 21:06:22
 * @LastEditTime: 2023-01-04 20:40:27
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

    int n, ans=0,num;
    cin >> n;
    int dp[n+2];
    init(dp);
    req(i, 1, n) {
        cin >> num;
        dp[i] = max(num,dp[i - 1] + num);
        ans = max(dp[i], ans);
    }
    cout << ans;

    return 0;
}