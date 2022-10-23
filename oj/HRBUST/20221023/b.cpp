#include <iostream>
using namespace std;
const double PI = 3.1415;
double round(double r)
{
    return PI * r * r;
}
double ball(double r)
{
    return 4.0 / 3.0 * PI * r * r * r;
}
double square(double r)
{
    return 4.0 * PI * r * r;
}
int main()
{
    double num;
    while(~scanf("%lf",&num))
    {
        printf("%.4f %.4f %.4f\n", round(num), ball(num), square(num));
    }
    return 0;
}