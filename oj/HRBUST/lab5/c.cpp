#include <iostream>
using namespace std;
int main() {
    int letteru = 0, letterl = 0, space = 0, digit = 0, others = 0;
    string str;
    getline(cin, str);
    for (int i = 0; i < (int)str.length(); i++) {
        if (isupper(str[i]))
            letteru++;
        else if (islower(str[i]))
            letterl++;
        else if (str[i] == ' ')
            space++;
        else if (str[i] >= '0' && str[i] <= '9')
            digit++;
        else
            others++;
    }
    printf("%d,%d,%d,%d,%d\n", letteru, letterl, space, digit, others);
    return 0;
}