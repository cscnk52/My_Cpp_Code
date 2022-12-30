#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    unordered_set<int> num;
    int t,temp;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &temp);
        num.insert(temp);
    }
    printf("%d\n", (int)num.size());
    return 0;
}