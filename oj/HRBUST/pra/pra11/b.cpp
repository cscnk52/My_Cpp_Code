#include <iostream>
using namespace std;
int day_count(int day, int money) {
    int ans;
    if (day % 7 <= 4) {
        ans = day / 7 * 5 * money + (day % 7 ) * money;
    }
    else {
        ans = day / 7 * 5 * money + 5 * money;
    }
    return ans;
}
int main() {
    int t;
    int a, b, c;
    int begin, end;
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d%d", &a, &b, &c);
        begin = --a;
        end = begin + b;
        printf("%d\n", day_count(end, c)-day_count(begin, c));
    }
    return 0;
}