#include <iostream>
#include <cmath>
using namespace std;
int main() {
    unsigned int x, m, n;
    while (~scanf("%d%d%d", &x, &m, &n)) {
        x = x << (16 - m);
        x %= 65536;
        printf("%d\n", x >> (16 - m + n - 1));
    }
    return 0;
}