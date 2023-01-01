#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x;
    cin >> x;
    cout << min(15, (int)ceil(3000 / x)) << '\n';
    return 0;
}