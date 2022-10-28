#include <iostream>
using namespace std;
int main()
{
    int letter = 0, space = 0, digit = 0, others = 0;
    string str;
    getline(cin, str);
    for (int i = 0; i < (int)str.length(); i++)
    {
        if (isalpha(str[i]))
            letter++;
        else if (str[i] == ' ')
            space++;
        else if (str[i] >= '0' && str[i] <= '9')
            digit++;
        else
            others++;
    }
    printf("letter:%d\nspace:%d\ndigit:%d\nothers:%d\n", letter, space, digit, others);
    return 0;
}