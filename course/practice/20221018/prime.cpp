#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
bool prf(int x)
{
    bool prime = true;
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
        {
            prime = false;
            break;
        }
    return prime;
}
int main()
{
    int a, b;
    vector<int> ans;
    scanf("%d%d", &a, &b);
    for (int j = a; j <= b;j++)
    {
        if(prf(j))
            ans.push_back(j);
    }
        for (vector<int>::iterator i = ans.begin(); i != ans.end(); i++)
        {
            printf("%d%c", *i, i == (ans.end()--) ? '\n' : ' ');
        }
    return 0;
}
