#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main() {
    int n, temp;
    scanf("%d", &n);
    vector<int> num[n];
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < n;j++) {
            scanf("%d", &temp);
            num[j].push_back(temp);
        }
    }
    for (int i = 0;i < n;i++) {
        printf("%d%c", *max_element(num[i].begin(), num[i].end()), i == n - 1 ? '\n' : ',');
    }
    return 0;
}