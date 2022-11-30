#include <iostream>
using namespace std;
int main() {

    string str;
    while (getline(cin, str)) {
        if (str.length() == 0)
            break;
        int letter = 0, space = 0, digit = 0, others = 0;
        for (int i = 0; i < (int)str.length(); i++) {
            if (isalpha(str[i]))
                letter++;
            else if (str[i] == ' ')
                space++;
            else if (str[i] >= '0' && str[i] <= '9')
                digit++;
            else
                others++;
        }
        printf("%d,%d,%d,%d\n", letter, space, digit, others);
    }
    return 0;
}