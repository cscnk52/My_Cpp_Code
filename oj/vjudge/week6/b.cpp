#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> num;
int main()
{
    int t, q, temp;
    scanf("%d%d", &t, &q);
    while (t--)
    {
        scanf("%d", &temp);
        num.push_back(temp);
    }
    sort(num.begin(), num.end());
    while (q--)
    {
        scanf("%d", &temp);
        if (num[num.size() - 1] < temp)
            printf("%d\n", num[num.size() - 1]);
        else if (num[0] >= temp)
            printf("%d\n", -1);
        else
        {
            if (binary_search(num.begin(), num.end(), temp))
                printf("%d\n", *(lower_bound(num.begin(), num.end(), temp)-1));
            else
                printf("%d\n", *(upper_bound(num.begin(), num.end(), temp)-1));
        }
    }
    return 0;
}