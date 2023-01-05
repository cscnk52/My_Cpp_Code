/*
 * @Author: cscnk52
 * @Date: 2023-01-05 19:13:02
 * @LastEditTime: 2023-01-05 21:17:09
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

int v, n, a[31], dp[20001];

int main() {
    int v, n;
    int dp[20020];
    int arr[50];
    init(dp);
    cin >> v >> n;
    rep(i, 0, n) scanf("%d", &arr[i]);
    rep(i, 0, n) {
        for (int j = v;j >= 0;j--) {
            if (j >= arr[i])
                dp[j] = max(dp[j], dp[j - arr[i]] + arr[i]);
        }
    }
    printf("%d\n", v - dp[v]);
    return 0;
}