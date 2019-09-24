/*There are several test cases. Each test case is a single line containing at least one and at most 100,000
letters, underscores and two special characters ‘[’ and ‘]’. ‘[’ means the “Home” key is pressed
internally, and ‘]’ means the “End” key is pressed internally. The input is terminated by end-of-file
(EOF).
For each case, print the Beiju text on the screen.
*/

#include <iostream>
#include <cstdio>
#include <queue>
#include <algorithm>
#include <stack>
#include <list>

using namespace std;


void solve(int test_case) {
    string s;
    while (cin >> s) {
        list <char> res;
        auto curPos = res.begin();

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '[') {
                curPos = res.begin();
            } else
            if (s[i] == ']') {
                curPos = res.end();
            } else {
                res.insert(curPos, s[i]);
            }
        }

        for (auto ch: res)
            cout << ch;
        cout << "\n";
    }
    exit(0);
}

int main() {
    int test_case = 0;
    while (++test_case) {
        solve(test_case);
    }
}