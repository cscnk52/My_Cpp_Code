#include <iostream>
#include <string.h>
#include <stack>
using namespace std;
int main()
{
    long long n;
    stack<char> number;
    char str[17] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    scanf("%lld", &n);
    if (n < 0)
    {
        printf("-");
        n = -n;
    }
    if (n == 0)
    {
        printf("0");
        return 0;
    }
    while (n)
    {
        number.push(str[n % 16]);
        n /= 16;
    }
    while (!number.empty())
    {
        cout << number.top();
        number.pop();
    }
    printf("\n");
    return 0;
}