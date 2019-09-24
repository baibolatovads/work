/*Every citizen in the nation will be assigned a unique number, from 1 to P
(where P is the current population). They will be put into a queue, with 1 in 
front of 2, 2 in front of 3, and so on. The hospital will process patients one 
by one, in order, from this queue. Once a citizen has been admitted, they will 
immediately move from the front of the queue to the back. Of course, sometimes 
emergencies arise; if you’ve just been run over by a steamroller, you can’t wait
for half the country to get a routine checkup before you can be treated! So, for
these (hopefully rare) occasions, an expedite command can be given to move one 
person to the front of the queue. Everyone else’s relative order will remain 
unchanged. Given the sequence of processing and expediting commands, output the 
order in which citizens will be admitted to the hospital.
The next C lines each contain a command of the form ‘N’, indicating the next 
citizen is to be admitted, or ‘E x’, indicating that citizen x is to be expedited to the front of the queue.
The last test case is followed by a line containing two zeros.
For each test case print the serial of output. This is followed by one line of output for each ‘N’ command,
indicating which citizen should be processed next. Look at the output for sample input for details
*/

#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;


void solve(int test_case) {
    int p, c, x;
    string cmd;
    deque<int> d;

    cin >> p >> c;
    if (!p && !c) exit(0);
    cout << "Case " << test_case << ":\n";

    // From the problem statements we know that number of commands(C) is no more than 1000.
    // It is easy to prove that we don't need to store more than 1000 citizens. Home Work :)
    for (int i = 1; i <= p && i <= 1000; i++) d.push_back(i);

    for (int i = 1; i <= c; i++) {
        cin >> cmd;
        if (cmd == "N") {
            int cur = d.front();
            cout << cur << "\n";
            d.pop_front();
            d.push_back(cur);
        } else {
            int x;
            cin >> x;
            deque <int> buf;
            // Get all elements except 'x' from d and move to buf.
            while (!d.empty()) {
                int cur = d.front();
                d.pop_front();
                if (cur != x) {
                    buf.push_back(cur);
                }
            }
            // 'buf' now contains all elements of d except x.
            d = buf;
            // Return 'x' back.
            d.push_front(x);
        }
    }
}

int main() {
    int test_case = 0;
    while (++test_case) {
        solve(test_case);
    }
}