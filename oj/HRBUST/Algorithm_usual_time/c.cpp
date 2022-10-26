#include <iostream>
using namespace std;
int main()
{
    int t, q, temp, sum, ave;
    bool status;
    scanf("%d", &t);
    while (t--)
    {
        sum = 0, status = false;
        scanf("%d", &q);
        for (int i = 0; i < q; i++)
        {
            scanf("%d", &temp);
            if (temp == 90)
            {
                status = true;
            }
            sum += temp;
        }
        ave = sum * 1.00 / q;
        if (status)
            printf("ChaoJiOuHuang\n");
        else
        {
            if (ave >= 1 && ave <= 30)
                printf("ChaoJiOuHuang\n");
            else if (ave > 30 && ave <= 60)
                printf("OuHuang\n");
            else if (ave > 60 && ave <= 80)
                printf("ZhengChang\n");
            else if (ave > 80 && ave <= 89)
                printf("FeiQiu\n");
        }
    }
    return 0;
}