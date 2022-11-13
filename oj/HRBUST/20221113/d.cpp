#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t, p, temp1, temp2;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &p);
        vector<pair<int, int>> num(p + 1);
        scanf("%d%d", &temp1, &temp2);
        num[0] = make_pair(temp1, temp2);
        for (int i = 1;i <= p;i++) {
            scanf("%d%d", &temp1, &temp2);
            if (temp1 > temp2)
                swap(temp1, temp2);
            num[i] = make_pair(temp1, temp2);
        }
        long long ans = 0, sum = num[0].first;
        for (auto it = num.begin() + 1;it != num.end();it++) {
            ans = max(ans, sum / (*it).second);
            sum += (*it).first;
        }
        printf("%lld\n", ans);
    }
    return 0;
}