#include <iostream>

using namespace std;

int main(void) {
	int change, answer = 0;
    int own[] = {500, 100, 50, 10};

    scanf("%d", &change);

    for(int i = 0; i < 4; i++) {
        answer += change / own[i];
        change %= own[i];
    }
    
    cout << answer;

	return 0;
}