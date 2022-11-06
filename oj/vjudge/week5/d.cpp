#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int array[101][101];
int a, b;
int xf[4] = {-1, 0, 1, 0};
int yf[4] = {0, 1, 0, -1};
struct Robot
{
    int x;
    int y;
    int d;
} robot[101];
bool forward(int s, int t)
{
    int x, y;
    int d = robot[s].d;
    x = robot[s].x;
    y = robot[s].y;
    array[x][y] = 0;
    for (int i = 0; i < t; i++)
    {
        x = x + xf[d];
        y = y + yf[d];
        if (x < 1 || x > a || y < 1 || y > b)
        {
            cout << "Robot " << s << " crashes into the wall" << endl;
            return true;
        }
        if (array[x][y])
        {
            cout << "Robot " << s << " crashes into robot " << array[x][y] << endl;
            return true;
        }
    }
    robot[s].x = x;
    robot[s].y = y;
    array[x][y] = s;
    return false;
}

bool action(int s, char dir, int t)
{
    switch (dir)
    {
    case 'F':
        return forward(s, t);
    case 'L':
        robot[s].d = (robot[s].d - t % 4 + 4) % 4;
        break;
    case 'R':
        robot[s].d = (robot[s].d + t % 4) % 4;
        break;
    }
    return false;
}

int main()
{
    int k, n, m, xi, yi, i, j, s, t;
    cin >> k;
    char dir;
    bool f = false;
    for (i = 0; i < k; i++)
    {
        memset(array, 0, sizeof(int) * 101 * 101);
        memset(robot, 0, sizeof(Robot) * 101);
        cin >> a >> b >> n >> m;
        for (j = 0; j < n; j++)
        {
            cin >> xi >> yi >> dir;
            array[xi][yi] = j + 1;
            robot[j + 1].x = xi;
            robot[j + 1].y = yi;
            switch (dir)
            {
            case 'W':
                robot[j + 1].d = 0;
                break;
            case 'N':
                robot[j + 1].d = 1;
                break;
            case 'E':
                robot[j + 1].d = 2;
                break;
            case 'S':
                robot[j + 1].d = 3;
                break;
            default:
                robot[j + 1].d = -1;
            }
        }
        f = false;
        for (j = 0; j < m; j++)
        {
            cin >> s >> dir >> t;
            if (!f)
                f = action(s, dir, t);
        }
        if (!f)
            cout << "OK" << endl;
    }
}