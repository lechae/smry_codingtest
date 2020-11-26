#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int n, k, answer = 0;

    scanf("%d", &n);
    scanf("%d", &k);

    int n2 = n, k2 = k;

    // way 1
    while(n >= k) {
        while(n % k != 0) {
            n--;
            answer++;
        }
        n /= k;
        answer++;
    }

    while(n > 1) {
        n--;
        answer++;
    }

    cout << answer << endl;

    // way 2
    int answer2 = 0;

    while(1) {
        int target = (n2 / k2) * k2;
        answer2 += (n2 - target);
        n2 = target;

        if(n2 < k2) break;
        answer2++;
        n2 /= k2;
    }

    answer2 += (n2 - 1);

    cout << answer2 << endl;

	return 0;
}