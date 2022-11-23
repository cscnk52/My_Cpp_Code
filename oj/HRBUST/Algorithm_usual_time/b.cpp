#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> player(4);
vector<int> desk;
int t, q, temp, x, y;
int main() {
    char oper;
    bool status = true;
    scanf("%d", &t);
    while (t--) {
        for (int i = 0;i < 4;i++) {
            for (int j = 0;j < 13;j++) {
                scanf("%d", &temp);
                player[i].push_back(temp);
            }
            sort(player[i].begin(), player[i].end());
        }
        scanf("%d", &q);
        for (int pla = 0;pla < q;pla++) {
            getchar();
            scanf("%c", &oper);
            switch (oper) {
            case 'S':
                status = true;
                scanf("%d%d", &x, &y);
                for (int i = 0;i < y;i++) {
                    scanf("%d", &temp);
                    for (auto it = player[pla % 4].begin();it != player[pla % 4].end();) {
                        if (*it == temp) {
                            it=player[pla % 4].erase(it);
                            break;
                        }
                        else {
                            it++;
                        }
                    }
                    if (temp != x) {
                        status = false;
                    }
                    desk.push_back(temp);
                }
                break;
            case '!':
                status = true;
                scanf("%d", &y);
                for (int i = 0;i < y;i++) {
                    scanf("%d", &temp);
                    for (auto it = player[pla % 4].begin();it != player[pla % 4].end();) {
                        if (*it == temp) {
                            it = player[pla % 4].erase(it);
                            break;
                        }
                        else {
                            it++;
                        }
                    }
                    if (temp != x) {
                        status = false;
                    }
                    desk.push_back(temp);
                }
                break;
            case '?':
                if (status) {
                    player[pla % 4].insert(player[pla % 4].end(), desk.begin(), desk.end());
                    desk.clear();
                }
                else {
                    player[(pla - 1) % 4].insert(player[(pla - 1) % 4].end(), desk.begin(), desk.end());
                    desk.clear();
                }
                break;
            }
        }
        for (int i = 0;i < 4;i++) {
            sort(player[i].begin(), player[i].end());
            for (auto& it : player[i]) {
                printf("%d ", it);
            }
            printf("\n");
            player[i].clear();
        }
    }
    return 0;
}