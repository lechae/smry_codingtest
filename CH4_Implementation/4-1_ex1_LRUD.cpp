#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

vector<string> split(string str, char delimiter) {
    vector<string> result;
    stringstream ss(str);
    string tmp;
 
    while(getline(ss, tmp, delimiter)) {
        result.push_back(tmp);
    }
 
    return result;
}

int main(void) {
    int n, x = 1, y = 1;
    cin >> n;
    cin.ignore(32767, '\n');

    string planStr = "";
    getline(cin, planStr);

    vector<string> plan = split(planStr, ' ');
    for(int i = 0; i < plan.size(); i++) {
        switch (plan[i][0])
        {
            case 'L':
                if(y - 1 >= 1) y--;
                break;
            case 'R':
                if(y + 1 <= 5) y++;
                break;
            case 'U':
                if(x - 1 >= 1) x--;
                break;
            case 'D':
                if(x + 1 <= 5) x++;
                break;
        }
    }

    cout << x << " " << y << endl;

	return 0;
}