#include <iostream>
using namespace std;
int main() {
    unsigned int num, ans;
    while (~scanf("%d", &num)) {
        ans = 0;
        while (num) {
            if ((num & 1) == 1) {
                ans++;
            }
            num = num >> 1;
        }
        printf("%d\n", ans);
    }
    return 0;
}