#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char ch;
    string str, temp;
    int sum;
    double num_sum;
    while (~scanf("%c", &ch)) {
        switch (ch) {
        case 'A':
            num_sum = 0;
            getchar();
            getline(cin, str);
            for (int i = 0;i < (int)str.length();i++) {
                if (isdigit(str[i])) {
                    while ((isdigit(str[i]) || str[i] == '.')) {
                        temp += str[i];
                        i++;
                    }
                    num_sum += stod(temp);
                    temp = "";
                }
            }
            printf("%.2f\n", num_sum);
            break;
        case 'B':
            sum = 0;
            getchar();
            getline(cin, str);
            for (int i = 0;i < (int)str.length();i++) {
                if (isalpha(str[i])) {
                    sum++;
                }
            }
            printf("%d\n", sum);
            break;
        case 'C':
            sum = 0;
            getchar();
            getline(cin, str);
            for (int i = 0;i < (int)str.length();i++) {
                if (isdigit(str[i])) {
                    sum++;
                }
            }
            printf("%d\n", sum);
            break;
        }
    }
}