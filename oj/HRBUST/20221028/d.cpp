#include <iostream>
using namespace std;
int main()
{
    int num;
    bool status;
    while(~scanf("%d",&num))
    {
        status = true;
        if(num%3!=0)
            status = false;
        if(num%5!=0)
            status = false;
        if(num%7!=0)
            status = false;
        printf("%d,%d\n", num, status?1:0);
    }
    return 0;
}