#include <iostream>
using namespace std;
string doing[] = { "studying","cleaning","driving" };
string pro[] = { "student","worker","driver" };
class profess {
public:
    string name;
    int num;
    void output() {
        printf("The %s %s is %s.\n", pro[num-1].c_str(),name.c_str(), doing[num - 1].c_str());
    }
}a;
int main() {
    while (cin>>a.num>>a.name) {
        a.output();
    }
    return 0;
}