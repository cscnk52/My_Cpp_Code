#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const long long N = 1000000;
vector<bool> nums(N,false);
int main() {
    int t,num,temp;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &num);
        fill(nums.begin(), nums.end(), false);
        for(int i=0;i<num-2;i++){
            scanf("%d", &temp);
            nums[temp] = true;
        }
        for (int i = 1;i <= num;i++)
        {
            if (nums[i] == false)
                printf("%d\n", i);
        }
    }
    return 0;
}