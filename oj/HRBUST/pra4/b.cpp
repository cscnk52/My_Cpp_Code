#include <iostream>
#include <cstring>
using namespace std;
string cat(string a, string b)
{
    return a + " " + b;
}
int main()
{
    string a, b;
    while (cin >> a >> b)
    {
        cout << cat(a, b) << endl;
    }
    return 0;
}