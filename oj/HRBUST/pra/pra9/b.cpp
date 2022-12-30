#include <iostream>
using namespace std;
class plural {
private:
    double a = 0, b = 0;
public:
    plural operator+(plural oper) {
        plural ans;
        ans.a = this->a + oper.a;
        ans.b = this->b + oper.b;
        return ans;
    }plural operator-(plural oper) {
        plural ans;
        ans.a = this->a - oper.a;
        ans.b = this->b - oper.b;
        return ans;
    }plural operator*(plural oper) {
        plural ans;
        ans.a = this->a * oper.a - this->b * oper.b;
        ans.b = this->a * oper.b + this->b * oper.a;
        return ans;
    }plural operator/(plural oper) {
        plural ans;
        ans.a = (this->a * oper.a + this->b * oper.b) / (oper.a * oper.a + oper.b * oper.b);
        ans.b = (this->b * oper.a - this->a * oper.b) / (oper.a * oper.a + oper.b * oper.b);
        return ans;
    }
    double get_a() {
        return a;
    }double get_b() {
        return b;
    }
    int input() {
        cin >> a >> b;
        return 0;
    }
}ans, temp;
int main() {
    int t, oper;
    while (~scanf("%d", &t)) {
        ans.input();
        t--;
        while (t--) {
            scanf("%d", &oper);
            temp.input();
            switch (oper) {
            case 1:
                ans = ans + temp;
                break;
            case 2:
                ans = ans - temp;
                break;
            case 3:
                ans = ans * temp;
                break;
            case 4:
                ans = ans / temp;
                break;
            }
        }
        printf("(%.2f,%.2fi)\n", ans.get_a(), ans.get_b());
    }
    return 0;
}