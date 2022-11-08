#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> num;
int func(int l, int r)
{
    if (is_sorted(num.begin() + l - 1, num.begin() + r))
        return r - l + 1;
    int mid = (l + r) >> 1;
    return max(func(l, mid), func(mid + 1, r));
}
int main()
{
    int temp, n;
    scanf("%d", &n);
    while (~scanf("%d", &temp))
        num.push_back(temp);
    printf("%d\n", func(1, n));
    return 0;
}