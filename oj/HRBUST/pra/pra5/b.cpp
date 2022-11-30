#include <iostream>
#include <vector>
using namespace std;
vector<int> child;
int main()
{
    int m, n;
    auto it = child.begin();
    while (~scanf("%d%d", &m, &n))
    {
        child.clear();
        it = child.begin();
        for (int i = 1; i <= m; i++)
            child.push_back(i);
        while ((int)child.size() > 1)
        {
            
        }
        printf("%d\n", child[0]);
    }
    return 0;
}