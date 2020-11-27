#include <iostream>

using namespace std;

int main(void) {
    string position;
    cin >> position;

    int x = position[0] - 96, y = position[1] - 48, cnt = 0;
    int dx[8] = {-2, -2, 2, 2, -1, 1, -1, 1};
    int dy[8] = {-1, 1, -1, 1, -2, -2, 2, 2};

    for(int i = 0; i < 8; i++) {
        int cx = x + dx[i];
        int cy = y + dy[i];

        if(cx > 0 && cx < 9 && cy > 0 && cy < 9) cnt++;
    }

    cout << cnt << endl;

	return 0;
}