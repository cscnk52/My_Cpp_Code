#include <iostream>
using namespace std;
int return_num(int num,int i) {
    if (i <= num)
        return i;
    else
        return 2 * num - i;
}
void output(int num) {
    for (int i = 1;i < 2 * num;i++) {
        for (int j = 1;j < 2 * num;j++) {
            printf("%d",min(return_num(num,i),return_num(num,j)));
        }
        printf("\n");
    }
}
int main() {
    int t;
    while (~scanf("%d", &t))
    {
        output(t);
    }
    return 0;
}