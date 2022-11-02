#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> number;
void pre(vector<int> num)
{
    sort(num.begin(), num.end());
    for (auto it=num.begin();it!=num.end();it++)
    {
        printf("%d%c", *it, ",\n"[it == num.end() - 1]);
    }
}
int main()
{
    int num;
    while(~scanf("%d",&num))
        number.push_back(num);
    pre(number);
    return 0;
}   