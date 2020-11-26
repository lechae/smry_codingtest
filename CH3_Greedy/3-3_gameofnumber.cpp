#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int n, m;

    scanf("%d", &n);
    scanf("%d", &m);

    int matrix[n][m];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // way 1
    int answer = 0;

    for(int i = 0; i < n; i ++) {
        sort(matrix[i], matrix[i] + m);
        if(matrix[i][0] > answer) {
            answer = matrix[i][0];
        }
    }

    cout << answer << endl;


    // way 2 (using min_element function)
    int answer2 = 0;

    for(int i = 0; i < n; i ++) {
        int min = *min_element(matrix[i], matrix[i] + m);
        if(min > answer2) {
            answer2 = min;
        }
    }

    cout << answer2 << endl;

	return 0;
}