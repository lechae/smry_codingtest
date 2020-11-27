#include <iostream>

using namespace std;

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);

    int x, y, d;
    scanf("%d %d %d", &x, &y, &d);

    int map[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &map[i][j]);
        }
    }

    bool visited[n][m];
    fill(&visited[0][0], &visited[n-1][m-1], false);
    visited[x][y] = true;

    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};

    int count = 1, turnTime = 0;
    while(1) {
        d = --d == -1 ? 3 : d;
        int nx = x + dx[d];
        int ny = y + dy[d];

        if(!visited[nx][ny] && map[nx][ny] == 0) {
            visited[nx][ny] = true;
            x = nx;
            y = ny;
            count++;
            turnTime = 0;
            continue;
        } else {
            turnTime++;
        }

        if(turnTime == 4) {
            nx = x - dx[d];
            ny = y - dy[d];
            if(map[nx][ny] == 0) {
                x = nx;
                y = ny;
            } else break;
            turnTime = 0;
        }
    }
    // while(1) {
    //     if(cnt == 4) {  
    //         switch (d)
    //         {
    //             case 0: x++; break;
    //             case 1: y--; break;
    //             case 2: x--; break;
    //             case 3: y++; break;
    //         }

    //         if(map[x][y] == 1) break;
    //         answer++;
    //         cnt = 0;
    //     }

    //     int chk = d - 1;
    //     if(chk < 0) chk = 3;

    //     switch (chk)
    //     {
    //         case 0: // north
    //             // if(x - 1 < 0) {
    //             //     x++;
    //             // } else 
    //             if(visited[x - 1][y] || x - 1 < 0 || map[x - 1][y] == 1) {
    //                 cnt++;
    //             } else if(!visited[x - 1][y]) {
    //                 visited[x - 1][y] = true;
    //                 x--;
    //                 answer++;
    //                 cnt = 0;
    //             } 
    //             break;
    //         case 1: // east
    //             // if(y + 1 >= m) {
    //             //     y--;
    //             // } else 
    //             if(visited[x][y + 1] || y + 1 >= m || map[x][y + 1] == 1) {
    //                 cnt++;
    //             } else if(!visited[x][y + 1]) {
    //                 visited[x][y + 1] = true;
    //                 y++;
    //                 answer++;
    //                 cnt = 0;
    //             }
    //             break;
    //         case 2: // south
    //             // if(x + 1 >= n) {
    //             //     x--;
    //             // } else 
    //             if(visited[x + 1][y] || x + 1 >= m || map[x + 1][y] == 1) {
    //                 cnt++;
    //             } else if(!visited[x + 1][y]) {
    //                 visited[x + 1][y] = true;
    //                 x++;
    //                 answer++;
    //                 cnt = 0;
    //             }
    //             break;
    //         case 3: // west
    //             // if(y - 1 < 0) {
    //             //     y++;
    //             // } else 
    //             if(visited[x][y - 1] || y - 1 < 0 || map[x][y - 1] == 1) {
    //                 cnt++;
    //             } else if(!visited[x][y - 1]) {
    //                 visited[x][y - 1] = true;
    //                 x--;
    //                 answer++;
    //                 cnt = 0;
    //             }
    //             break;
    //     }

    //     if(map[x][y] == 1) break;
    //     d = chk;
    // }

    cout << count << endl;

	return 0;
}