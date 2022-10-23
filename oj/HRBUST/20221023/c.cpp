#include <iostream>
#include <vector>
using namespace std;
vector<double> num;
double ave(vector<double> &num)
{
    long double sum=0;
    for (vector<double>::iterator it = num.begin(); it != num.end();it++)
    {
        sum += *it;
    }
    return sum / (int)num.size();
}
int main()
{
    int n;
    double temp,average;
    while(~scanf("%d",&n))
    {
        num.clear();
        while(n--)
        {
            scanf("%lf", &temp);
            num.push_back(temp);
        }
        average = ave(num);
        for (vector<double>::iterator it = num.begin(); it != num.end();it++)
        {
            printf("%.2f%c", *it - average, it == num.end() - 1 ? '\n' : ' ');
        }
    }
    return 0;
}