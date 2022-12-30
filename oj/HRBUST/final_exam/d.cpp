#include <iostream>
#include <cmath>
using namespace std;
class ball {
private:
    double x, y, z, r;
public:
    void input(double x, double y, double z, double r) {
        this->x = x;
        this->y = y;
        this->z = z;
        this->r = r;
    }
    double get_x() {
        return this->x;
    }
    double get_y() {
        return this->y;
    }
    double get_z() {
        return this->z;
    }
    double get_r() {
        return this->r;
    }
}ball1, ball2;
string judge(ball ball1, ball ball2) {
    double distance = sqrt(pow(ball1.get_x() - ball2.get_x(), 2) + pow(ball1.get_y() - ball2.get_y(), 2) + pow(ball1.get_z() - ball2.get_z(), 2));
    if (distance > ball1.get_r() + ball2.get_r()) {
        return "disjoint";
    }
    else {
        return "intersectant";
    }
}
int main() {
    int n;
    double x, y, z, r;
    scanf("%d", &n);
    while (n--) {
        scanf("%lf%lf%lf%lf", &x, &y, &z, &r);
        ball1.input(x, y, z, r);
        scanf("%lf%lf%lf%lf", &x, &y, &z, &r);
        ball2.input(x, y, z, r);
        printf("They are %s\n", judge(ball1, ball2).c_str());
    }
    return 0;
}