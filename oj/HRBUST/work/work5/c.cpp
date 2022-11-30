#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<string> str;
int main()
{
    int t;
    string s;
    scanf("%d", &t);
    while(t--)
    {
        cin >> s;
        str.push_back(s);
    }
    sort(str.begin(), str.end());
    for(auto it:str)
        printf("%s\n", it.c_str());
    return 0;
}