#include <iostream>
using namespace std;
int main() {
    int t;
    int a, b, c;
    float ave;
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d%d", &a, &b, &c);
        ave = (a + b + c) / 3;
        printf("%.2f\n", ave);
    }
    return 0;
}