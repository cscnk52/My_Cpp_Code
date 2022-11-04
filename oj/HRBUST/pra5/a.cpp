#include <iostream>
#include <vector>
using namespace std;
vector<string> str;
int main()
{
    int t;
    string temp,maxx;
    while(~scanf("%d",&t))
    {
        str.clear();
        maxx = "";
        while(t--)
        {
            cin >> temp;
            maxx = temp.length() >= maxx.length() ? temp : maxx;
        }
        printf("%s\n", maxx.c_str());
    }
    return 0;
}