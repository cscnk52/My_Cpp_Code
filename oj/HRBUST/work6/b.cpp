#include <iostream>
#include <algorithm>
using namespace std;
struct student {
    string name;
    int a, b, c;
    double ave;
};
bool cmp(student a, student b) {
    return a.ave > b.ave;
}
int main() {
    int t;
    while (~scanf("%d", &t)) {
        student student[t];
        for (int i = 0;i < t;i++) {
            cin >> student[i].name >> student[i].a >> student[i].b >> student[i].c;
            student[i].ave = (student[i].a + student[i].b + student[i].c) / 3.00;
        }
        sort(student, student + t, cmp);
        for (auto it : student)
            printf("%s %.2f %.2f %.2f %.2f\n", it.name.c_str(), (double)it.a, (double)it.b, (double)it.c, it.ave);
    }
    return 0;
}