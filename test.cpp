#include <iostream>
#include <cstring>
using namespace std;
struct robot
{
    int x;
    int y;
    int direction;
    int x_destination;
    int y_destination;
    int direction_destination;
} robots[101];
int ground[101][101];
int crash(int x, int y)
{
    if (ground[x][y] == 0)
        return 0; // crash to edge
    else if (ground[x][y] > 0)
        return ground[x][y]; // crash to robot,and return robot id
    else
        return -1; // no crash
}
int round(int direction, bool lr) // left is 0.right is 1
{
    if (lr)
        return (direction + 3) % 4;
    else
        return (direction + 1) % 4;
}
int direction_judge(char direction)
{
    switch (direction)
    {
    case 'W':
        return 0;
        break;
    case 'N':
        return 1;
        break;
    case 'E':
        return 2;
        break;
    case 'S':
        return 3;
        break;
    default:
        return -1;
    }
}
int robot_move_one(int x_destination, int y_destination)
{
    if (crash(x_destination, y_destination) == -1)
    {
        ground[x_destination][y_destination] = ground[x_destination][y_destination];
        ground[x_destination][y_destination] = -1;
        return -1;
    }
    else
    {
        return crash(x_destination, y_destination);
    }
}
int robot_move_replete(int x_current, int y_current, char direction_current_char, int robot_id, char action)
{
    int direction_current_int = direction_judge(direction_current_char);
    switch (action)
    {
    case 'L':
        direction_current_int = round(direction_current_int, 0);
        return -1;
        break;
    case 'R':
        direction_current_int = round(direction_current_int, 1);
        return -1;
        break;
    case 'F':
        switch (direction_current_int)
        {
        case 0:
            return robot_move_one(x_current - 1, y_current);
            break;
        case 1:
            return robot_move_one(x_current, y_current + 1);
            break;
        case 2:
            return robot_move_one(x_current + 1, y_current);
            break;
        case 3:
            return robot_move_one(x_current, y_current - 1);
            break;
        }
        break;
    }
    return 0;
}
int main()
{
    int k, a, b, n, m;
    bool status = true;
    char destination;
    int robot_id = 0, replete_time = 0;
    scanf("%d", &k);
    while (k--)
    {
        status = true;
        memset(ground, 0, sizeof(int) * 101 * 101);
        memset(robots, 0, sizeof(robots));
        scanf("%d%d", &a, &b);
        for (int i = 1; i <= a; i++)
        {
            for (int j = 1; j <= b; j++)
            {
                ground[i][j] = -1;
            }
        }
        scanf("%d%d", &n, &m);
        for (int i = 1; i <= n; i++)
        {
            scanf("%d%d %c", &(robots[i].x_destination), &(robots[i].y_destination), &destination);
            robots[i].direction_destination = direction_judge(destination);
        }
        for (int i = 1; i <= m; i++)
        {
            scanf("%d %c %d", &robot_id, &destination, &replete_time);
            while (replete_time--)
            {
                if (status)
                {
                    if (robot_move_replete(robots[i].x, robots[i].y, robots[i].direction, robot_id, destination) == 0)
                    {
                        printf("Robot %d crashes into the wall\n", robot_id);
                        status = false;
                    }
                    else if (robot_move_replete(robots[i].x, robots[i].y, robots[i].direction, robot_id, destination) == -1)
                    {
                        ground[robots[i].x][robots[i].y] = robot_id;
                        continue;
                    }
                    else
                    {
                        printf("Robot %d crashes into robot %d\n", robot_id, robot_move_replete(robots[i].x, robots[i].y, robots[i].direction, robot_id, destination));
                        status = false;
                    }
                }
            }
            if (status == true)
                printf("OK\n");
        }
    }
    return 0;
}