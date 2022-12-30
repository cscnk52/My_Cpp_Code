#include <iostream>
using namespace std;
int main() {
    int n;
    double current = 0, sum = 0;
    scanf("%d", &n);
    while (n--) {
        sum = 0;
        for (int i = 0;i < 4;i++) {
            scanf("%lf", &current);
            sum = sum + current;
        }
        printf("%.2f\n", sum);
    }
    return 0;
}