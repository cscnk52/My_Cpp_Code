#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%f,", 1.00 * ((-b) + sqrt(b * b - 4 * a * c)) / 2 * a);
    printf("%f\n", 1.00 * ((-b) - sqrt(b * b - 4 * a * c)) / 2 * a);
    return 0;
}