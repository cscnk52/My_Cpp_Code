#include <iostream>
using namespace std;
int n;
bool vis[50];
int a[50];
void dfs(int step)
{
    if (step == n + 1)
    {
        for (int i = 1; i < step; i++)
            printf("%d%c", a[i]," \n"[i==step-1]);
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == 0)
        {
            vis[i] = 1;
            a[step] = i;
            dfs(step + 1);
            vis[i] = 0;
        }
    }
    return;
}
int main()
{
    scanf("%d", &n);
    dfs(1);
    return 0;
}