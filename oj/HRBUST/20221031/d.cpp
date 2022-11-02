#include <iostream>
using namespace std;
string one[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
string ten[] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
int main()
{
    int num;
    while (~scanf("%d", &num))
    {
        if (num < 20)
            printf("%s\n", one[num].c_str());
        else
        {
            if (num % 10 == 0)
                printf("%s\n", ten[num / 10 - 2].c_str());
            else
                printf("%s-%s\n", ten[num / 10 - 2].c_str(), one[num % 10].c_str());
        }
    }
    return 0;
}
