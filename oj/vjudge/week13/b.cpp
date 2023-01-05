/*
 * @Author: cscnk52
 * @Date: 2023-01-03 11:48:23
 * @LastEditTime: 2023-01-03 20:40:37
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
const int INF = INT_MAX;

vector<int> a,f;
int n, ans = INT_MIN;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    scanf("%d", &n);
    a.resize(n+1);
    f.resize(n+1);
    req(i, 1, n) {
        scanf("%d", &a[i]);
        f[i] = 1;
    }
    
    req(i, 1, n) {
        rep(j, 1, i) {
            if (a[j] < a[i]) {
                f[i] = max(f[i], f[j] + 1);
            }
        }
    }
    
    ans = *max_element(all(f));
    
    cout << ans << LF;

    return 0;
}