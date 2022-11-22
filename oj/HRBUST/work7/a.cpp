#include <iostream>
#include <cmath>
using namespace std;
const double pi = 3.14159;
class circle {
private:
    double r, x, y, s, c;
public:
    void init(double r, double x, double y);
    void output() {
        printf("%10.4f%10.4f\n", s, c);
    }
};
void circle::init(double r, double x, double y) {
    r = r;
    x = x;
    y = y;
    s = r * r * pi;
    c = 2 * pi * r;
}
int main() {
    circle circle1, circle2;
    double a, b, c, d, e, f;
    while (~scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f)) {
        circle1.init(a, b, c);
        circle2.init(d, e, f);
        circle1.output();
        circle2.output();
        if (sqrt(pow(e - b, 2) + pow(f - c, 2)) == a + d) {
            printf("These two circles are tangent\n");
        }
        else if (sqrt(pow(e - b, 2) + pow(f - c, 2)) > a + d) {
            printf("These two circles are disjoint\n");
        }
        else {
            printf("These two circles are intersectant\n");
        }
    }
    return 0;
}