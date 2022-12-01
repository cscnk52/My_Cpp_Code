#include <iostream>
using namespace std;
class vehicle {
public:
    void start() {
        printf("vehicle is running.\n");
    }
    void stop() {
        printf("vehicle stop.\n");
    }
}vehicle;
class bicycle :public vehicle {
public:
    void start() {
        printf("bicycle is running.\n");
    }
    void stop() {
        printf("bicycle stop.\n");
    }
}bicycle;
class motorcar :virtual public vehicle {
public:
    void start() {
        printf("motorcar is running.\n");
    }
    void stop() {
        printf("motorcar stop.\n");
    }
}motorcar;
class motorcycle :public motorcar, public bicycle {
public:
    void start() {
        printf("motorcycle is running.\n");
    }
    void stop() {
        printf("motorcycle stop.\n");
    }
}motorcycle;
int main() {
    int num;
    while (~scanf("%d", &num)) {
        switch (num) {
        case 1:
            bicycle.start();
            bicycle.stop();
            break;
        case 2:
            motorcar.start();
            motorcar.stop();
            break;
        }
    }
}