#include <iostream>
#include <cmath>
using namespace std;
struct triangle {
    double a, b, c;
};
double squ(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
int main() {
    triangle triangle;
    while (~scanf("%lf%lf%lf", &triangle.a, &triangle.b, &triangle.c)) {
        if (triangle.a + triangle.b > triangle.c && triangle.a + triangle.c > triangle.b && triangle.b + triangle.c > triangle.a)
            printf("area:%.2f,perimeter:%.2f\n", squ(triangle.a, triangle.b, triangle.c), triangle.a + triangle.b + triangle.c);
        else
            printf("cannot consist of a triange!\n");
    }
    return 0;
}