#include <iostream>
using namespace std;
int main() {
    long long n, m, q, l;
    int oper, k;
    scanf("%lld%lld%lld%lld", &n, &m, &q, &l);
    long long renko = m, merry = m;
    long long c[n][l], d[n];
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < l;j++) {
            scanf("%lld", &c[i][j]);
        }
    }
    for (int i = 0;i < n;i++) {
        scanf("%lld", &d[i]);
    }
    while (~scanf("%d%d", &oper, &k)) {
        switch (oper)
        {
        case 1:
            
            break;
        case 2:
            
            break;
        }
    }
}