#include <iostream>
int main() {
    int t, sum = 0,temp;
    scanf("%d", &t);
    for (int i = 0;i < t;i++) {
        scanf("%d", &temp);
        sum += temp;
    }
    printf("%.2f\n", 1.00 * sum / t);
    return 0;
}