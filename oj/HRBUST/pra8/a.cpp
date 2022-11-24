#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a, b;
    while (~scanf("%d%d", &a, &b)) {
        printf("%d,%d\n", __gcd(a, b), a * b / __gcd(a, b));
    }
    return 0;
}