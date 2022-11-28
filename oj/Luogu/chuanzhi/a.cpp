#include <iostream>
using namespace std;
int main() {
    long long int a, b;
    scanf("%lld%lld", &a, &b);
    if (a == 0)
        printf("0\n");
    else if (b >= 0)
        printf("%lld\n", abs(a));
    else
        printf("-%lld\n", abs(a));
    return 0;
}