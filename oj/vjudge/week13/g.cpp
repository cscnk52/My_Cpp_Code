/*
 * @Author: cscnk52
 * @Date: 2023-01-05 10:17:59
 * @LastEditTime: 2023-01-05 19:01:36
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

int n, p, w[110], v[110], dp[50010];

int main() {
	IO_ACCELERATE;

	init(dp);
	cin >> n >> p;
	req(i, 1, n) {
		cin >> v[i] >> w[i];
	}
	req(i, 1, n) {
		req(j, v[i], p) {
			dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
		}
	}

	cout << dp[p] << LF;

	return 0;
}