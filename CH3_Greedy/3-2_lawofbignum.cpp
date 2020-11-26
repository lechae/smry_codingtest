#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	int n, m, k;

    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &k);

    int num[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    sort(num, num + n);

    // way 1
    int cnt = 0, answer = 0;
    for(int i = 0; i < m; i++) {
        if(cnt == k) {
            answer += num[n - 2];
            cnt = 0;
        } else {
            answer += num[n - 1];
            cnt++;
        }
    }

    cout << answer << endl;
    

    // way 2 (using sequence)
    int first = num[n - 1];
    int second = num[n - 2];

    // number of adding the largest number
    int cnt2 = m / (k + 1) * k + m % (k + 1);

    int answer2 = cnt2 * first + (m - cnt2) * second;

    cout << answer2 << endl;

	return 0;
}