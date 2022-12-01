#include <iostream>
using namespace std;
class cpu {
private:
    enum CPU_rank { P1 = 1, P2, P3, P4, P5, P6, P7 }rank;
    int frequency;
    double voltnumber;
public:
    void init(int r, int f, double v) {
        this->rank = (CPU_rank)r;
        this->frequency = f;
        this->voltnumber = v;
        printf("P%d\n", this->rank);
        printf("%dMHZ\n", this->frequency);
        printf("%.1fV\n", this->voltnumber);
        printf("free CPU object\n");
    }
    void run() {

    }
    void stop() {

    }
}cpu;
int main() {
    int r, f;
    double v;
    scanf("%d%d%lf", &r, &f, &v);
    cpu.init(r, f, v);
    return 0;
}