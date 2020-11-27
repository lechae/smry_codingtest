#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int n, cnt = 0;
    cin >> n;

    for(int i = 0; i <= n; i++) {
        for(int j = 0; j < 60; j++) {
            for(int k = 0; k < 60; k++) {
                string tmp = to_string(i) + to_string(j) + to_string(k);
                if(tmp.find("3") != string::npos) cnt++;
            }
        }
    }

    cout << cnt << endl;

	return 0;
}