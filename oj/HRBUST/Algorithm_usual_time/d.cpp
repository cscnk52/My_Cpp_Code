#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> tou, bei, mao, hua, sha;
int main()
{
    int t, num, sum;
    string str;
    while (~scanf("%d", &t))
    {
        sum = 0,tou.clear(),bei.clear(),mao.clear(),hua.clear(),sha.clear();
        while (t--)
        {
            cin >> str >> num;
            if (str == "tou")
                tou.push_back(num);
            else if (str == "bei")
                bei.push_back(num);
            else if (str == "mao")
                mao.push_back(num);
            else if (str == "hua")
                hua.push_back(num);
            else if (str == "sha")
                sha.push_back(num);
        }
        if (tou.empty() || bei.empty() || mao.empty() || hua.empty() || sha.empty())
            printf("-1\n");
        else
        {
            sum += *max_element(tou.begin(), tou.end());
            sum += *max_element(bei.begin(), bei.end());
            sum += *max_element(mao.begin(), mao.end());
            sum += *max_element(hua.begin(), hua.end());
            sum += *max_element(sha.begin(), sha.end());
            printf("%d\n", sum);
        }
    }
}