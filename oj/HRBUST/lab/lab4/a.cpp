#include <iostream>
#include <cmath>
using namespace std;
double squ(int a, int b, int c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
int main() {
    int a, b, c;
    while (~scanf("%d%d%d", &a, &b, &c)) {
        if (a + b <= c || a + c <= b || b + c <= a)
            printf("0\n");
        else {
            printf("%.2f\n", squ(a, b, c));
        }
    }
    return 0;
}