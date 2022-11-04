#include <iostream>
#include <cstring>
using namespace std;
long long number;
string solve(long long num)
{
    if (num == 1)
        return "2";
    else if (num % 2 != 0)
        return "(2*" + solve(num - 1) + ")";
    else
        return "(" + solve(num / 2) + ")^2";
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%lld", &number);
        printf("%s\n", solve(number).c_str());
    }
}