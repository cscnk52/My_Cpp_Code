#include <iostream>
using namespace std;
int main() {
    unsigned int num;
    while (~scanf("%d", &num)) {
        printf("%d\n", (num & (num - 1)) == 0);
    }
    return 0;
}
