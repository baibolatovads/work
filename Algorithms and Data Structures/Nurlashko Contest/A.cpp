/*In a team queue each element belongs to a team. If an element enters the queue, it first searches
the queue from head to tail to check if some of its teammates (elements of the same team) are already
in the queue. If yes, it enters the queue right behind them. If not, it enters the queue at the tail
and becomes the new last element (bad luck). Dequeuing is done like in normal queues: elements are
processed from head to tail in the order they appear in the team queue.
There are three different kinds of commands:
• ENQUEUE x — enter element x into the team queue
• DEQUEUE — process the first element and remove it from the queue
• STOP — end of test case
For each test case, first print a line saying ‘Scenario #k’, where k is the number of the test case. Then,
for each ‘DEQUEUE’ command, print the element which is dequeued on a single line. Print a blank line
after each test case, even after the last one.
*/

#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

int n, student, team[1000000];

void solve(int test_case) {
    queue <int> team_queue[1111];
    queue <queue<int>* > teams;

    cin >> n;
    if (!n) exit(0);

    cout << "Scenario #" << test_case << "\n";

    for (int i = 1; i <= n; i++) {
        int k;
        cin >> k;
        for (int j = 1; j <= k; j++) {
            cin >> student;
            team[student] = i;
        }
    }

    string cmd;
    while (cin >> cmd) {
        if (cmd == "STOP") {
            cout << "\n";
            return;
        }
        if (cmd == "ENQUEUE") {
            cin >> student;
            int t = team[student];
            if (team_queue[t].empty()) {
                // There is no one from our team ;(
                // Let's add a new team to queue !
                teams.push(&team_queue[t]);
            }
            team_queue[t].push(student);
        } else {
            cout << (*teams.front()).front() << "\n";
            (*teams.front()).pop();
            if ((*teams.front()).empty()) teams.pop();
        }
    }
}

int main() {
    int test_case = 0;
    while (++test_case) {
        solve(test_case);
    }
return 0;   
}