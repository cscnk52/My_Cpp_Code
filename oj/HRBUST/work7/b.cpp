#include <iostream>
using namespace std;
class shape {
public:
    double x, y;
};
class rectangle :public shape {
public:
    void init(double xx, double yy) {
        x = xx;
        y = yy;
    }
    double get_area() {
        return x * y;
    }
};
int main() {
    rectangle rect;
    double temp1, temp2;
    while (~scanf("%le%le", &temp1, &temp2)) {
        rect.init(temp1, temp2);
        printf("%.4f\n", rect.get_area());
    }
    return 0;
}