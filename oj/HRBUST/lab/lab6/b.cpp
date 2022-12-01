#include <iostream>
using namespace std;
class rectangle {
private:
    int length, width;
public:
    int getarea() {
        return this->length * this->width;
    }
    int getlength() {
        return this->length;
    }
    int getwidth() {
        return this->width;
    }
    void init(int length, int width) {
        this->length = length;
        this->width = width;
    }
}rectangle;
int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    rectangle.init(a, b);
    printf("%d\n", rectangle.getarea());
    return 0;
}