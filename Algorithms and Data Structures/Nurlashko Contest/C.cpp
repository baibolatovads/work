/*The first line of input contains c, the number of test cases. Each test case begins with l, m. m lines
follow describing the cars that arrive in this order to be transported. Each line gives the length of a
car (in centimeters), and the bank at which the car arrives (‘left’ or ‘right’).
For each test case, output one line giving the number of times the ferry has to cross the river in order
to serve all waiting cars.

*/
#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;


void solve(int test_case) {
    int len, l, m, ans = 0;
    string side;
    queue<int> queueL, queueR;
    cin >> l >> m;
    l *= 100;
    for (int i = 1; i <= m; i++) {
        cin >> len >> side;
        if (side == "left") {
            queueL.push(len);
        } else {
            queueR.push(len);
        }
    }

    side = "left";
    while (!queueL.empty() || !queueR.empty()) {
        ans++;
        if (side == "left") {
            int s = 0;
            while (!queueL.empty() && s + queueL.front() <= l) {
                s += queueL.front();
                queueL.pop();
            }
            side = "right";
        } else {
            int s = 0;
            while (!queueR.empty() && s + queueR.front() <= l) {
                s += queueR.front();
                queueR.pop();
            }
            side = "left";
        }
    }
    cout << ans << "\n";
}

int main() {
    int test_case = 0;
    cin >> test_case;
    while (test_case--) {
        solve(test_case);
    }
}