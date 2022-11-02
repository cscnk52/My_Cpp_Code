#include <iostream>
#include <vector>
#include <map>
using namespace std;
map<pair<int, int>, bool> vis;
vector<pair<int, int>> road;
void dfs(int depth)
{
    if(depth==10)
    {
        for(auto it:road)
            printf("(%d,%d)\n", it.first, it.second);
        return;
    }else
    {
        
    }
}
int main()
{
    
}