#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
map<string, int> mp;
int main() {
    string str;
    string ans = "";
    while (cin >> str) {
        if (str == "0")
            break;
        if (!mp[str])
            ans += str;
        mp[str] = 1;
    }
    cout << ans << endl;
    return 0;
}