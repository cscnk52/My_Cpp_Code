#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
deque<int> approx;
int main()
{
    int num,n,ans;
    while(~scanf("%d%d",&num,&n))
    {
        ans = 1;
        approx.clear();
        for (int i = 1; i*i <= num;i++)
        {
            if(num%i==0)
            {
                approx.push_front(i);
                approx.push_back(num / i);
            }
        }
        if((int)approx.size()<n)
        {
            printf("your number is wrong\n");
            continue;
        }else
        {
            sort(approx.begin(), approx.end());
            for (int i = 0; i < n;i++)
            {
                ans *= approx[i];
            }
            printf("%d\n", ans);
        }
    }
}