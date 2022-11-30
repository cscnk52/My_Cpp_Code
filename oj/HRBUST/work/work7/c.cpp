#include <iostream>
using namespace std;
class box {
public:
    int x = 0, y = 0, z = 0;
    box operator+(const box& t) {
        box ans;
        ans.x = x + t.x;
        ans.y = y + t.y;
        ans.z = z + t.z;
        return ans;
    }
};
int main() {
    box box1, box2, ans;
    while (~scanf("%d%d%d%d%d%d", &box1.x, &box1.y, &box1.z, &box2.x, &box2.y, &box2.z)) {
        ans = box1 + box2;
        printf("%d %d %d\n", ans.x, ans.y, ans.z);
    }
    return 0;
}