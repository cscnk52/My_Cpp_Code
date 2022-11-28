#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
deque<long long> num;
void solve() {
    if (*(num.begin() + 1) - *(num.begin()) > *(num.end() - 1) - *(num.end() - 2)) {
        num.push_back(*(num.end()-1));
        num.erase(num.begin());
    }
    else {
        num.push_front(*(num.begin()));
        num.erase(num.end() - 1);
    }
}
int main() {
    long long int n, m, temp;
    scanf("%lld%lld", &n, &m);
    for (int i = 0;i < n;i++) {
        scanf("%lld", &temp);
        num.push_back(temp);
    }
    sort(num.begin(), num.end());
    for (int i = 0;i < m;i++) {
        solve();
    }
    printf("%lld\n", *(num.end() - 1) - *(num.begin()));
    return 0;
}