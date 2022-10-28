#include <iostream>
using namespace std;
int main()
{
    char ch;
    while(~scanf("%c",&ch))
    {
        if(ch>='A'&&ch<='Z')
            printf("%c", ch + 32);
        else if(ch>='a'&&ch<='z')
            printf("%c", ch - 32);
        else
            printf("%c", ch);
    }
    return 0;
}