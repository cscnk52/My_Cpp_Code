#include <iostream>
using namespace std;
int main() {
    int t,y;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &y);
        printf("%s\n", ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) ? "YES" : "NO");
    }
    return 0;
}