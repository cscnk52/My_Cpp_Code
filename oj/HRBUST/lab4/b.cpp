#include <iostream>
using namespace std;
int main() {
    int t;
    scanf("%d", &t);
    for (int i = 1;i <= t;i++) {
        for (int j = 1;j <= (t - i + 1);j++) {
            printf(" ");
        }
        for (int j = 1;j <= 2 * i - 1;j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}