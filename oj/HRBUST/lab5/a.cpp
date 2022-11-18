#include <iostream>
using namespace std;
int main() {
    int n, a[10];
    for (n = 0;n <= 9;n++)
        scanf("%d", &a[n]);
    for (n = 0;n <= 9;n++)
        printf("%4d", a[n]);
    printf("\n");
    return 0;
}