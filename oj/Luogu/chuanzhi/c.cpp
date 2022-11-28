#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int width(int num) {
    int temp = 1;
    while (num /= 10) {
        temp++;
    }
    return temp;
}
vector<string> num;
int main() {
    string str;
    int m = 0, n = 0,size;
    while (getline(cin, str)) {
        num.push_back(str);
    }
    size = num.size();
    m = width(num.size());
    for (int i = 1;i <= size;i++) {
        n = width(i);
        for (int j = 0;j < m - n;j++) {
            printf(" ");
        }
        printf("%d", i);
        printf(" ");
        printf("%s\n", num[i-1].c_str());
    }
    return 0;
}