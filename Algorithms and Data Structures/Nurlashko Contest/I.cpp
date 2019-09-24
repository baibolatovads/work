/*There are n processes in a queue. Each process has namei and timei. 
The round-robin scheduling handles the processes in order. A round-robin 
scheduler gives each process a quantum (a time slot) and interrupts the 
process if it is not completed by then. The process is resumed and moved 
to the end of the queue, then the scheduler handles the next process in the 
queue.

For example, we have the following queue with the quantum of 100ms.

A(150) - B(80) - C(200) - D(200)
First, process A is handled for 100ms, then the process is moved to the end 
of the queue with the remaining time (50ms).

B(80) - C(200) - D(200) - A(50)
Next, process B is handled for 80ms. The process is completed with the time 
stamp of 180ms and removed from the queue.

C(200) - D(200) - A(50)
Your task is to write a program which simulates the round-robin scheduling .
*/

#include <iostream>
#include <cstdio>
#include <queue>
#include <algorithm>
#include <stack>
#include <list>

using namespace std;

queue <pair<string, int>> q;
int n, qt, pt;
string name;

void solve(int test_case) {
    cin >> n >> qt;
    for (int i = 1; i <= n; i++) {
        cin >> name >> pt;
        q.push({name, pt});
    }

    long long curT = 0;
    while (!q.empty()) {
        auto v = q.front();
        q.pop();
        int x = min(qt, v.second);
        v.second -= x;
        curT += x;
        if (!v.second) {
            cout << v.first << " " << curT << "\n";
        } else {
            q.push(v);
        }
    }
    exit(0);
}

int main() {
    int test_case = 0;
    while (++test_case) {
        solve(test_case);
    }
}