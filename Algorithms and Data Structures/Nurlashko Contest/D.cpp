/*One line with a positive integer: the number of test cases (at most 100). Then for each test case:
• One line with two integers n and m, where n is the number of jobs in the queue (1 ≤ n ≤ 100)
and m is the position of your job (0 ≤ m ≤ n − 1). The first position in the queue is number 0,
the second is number 1, and so on.
• One line with n integers in the range 1 to 9, giving the priorities of the jobs in the queue. The
first integer gives the priority of the first job, the second integer the priority of the second job,
and so on.
For each test case, print one line with a single integer; the number of minutes until your job is completely
printed, assuming that no additional print jobs will arrive.
*/
#include <iostream>
#include <cstdio>
#include <queue>
#include <algorithm>

using namespace std;


void solve(int test_case) {
    int n, position, priority[1111], ans = 0;
    queue<int> q;
    cin >> n >> position;
    for (int i = 0; i < n; i++) {
        cin >> priority[i];
        q.push(priority[i]);
    }
    // Sort priorities to make getting max much easier later.
    sort(priority, priority + n);

    while (1) {
        if (q.front() < priority[q.size() - 1]) {
            q.push(q.front());
        } else {
            ans++;
            if (position == 0) {
                cout << ans << "\n";
                return;
            }
        }
        q.pop();
        // One element was either moved back or removed which means that we moved one step forward.
        position = (position - 1 + q.size()) % q.size();
    }

}

int main() {
    int test_case = 0;
    cin >> test_case;
    while (test_case--) {
        solve(test_case);
    }
}