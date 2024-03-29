/*Reverse Polish notation is a notation where every operator follows 
all of its operands. For example, an expression (1+2)*(5+4) in the 
conventional Polish notation can be represented as 1 2 + 5 4 + * in the 
Reverse Polish notation. One of advantages of the Reverse Polish notation 
is that it is parenthesis-free.
*/

#include <iostream>
#include <cstdio>
#include <queue>
#include <algorithm>
#include <stack>
#include <list>

using namespace std;

stack <int> st;
string s;

int get() {
    int x = st.top();
    st.pop();
    return x;
}

void solve(int test_case) {
    while (cin >> s) {
        if (s == "+") {
            int x = get();
            int y = get();
            st.push(x + y);
        } else
        if (s == "-") {
            int x = get();
            int y = get();
            st.push(y - x);
        } else
        if (s == "*") {
            int x = get();
            int y = get();
            st.push(x * y);
        } else {
            st.push(atoi(s.c_str()));
        }
    }
    cout << get();
    exit(0);
}

int main() {
    int test_case = 0;
    while (++test_case) {
        solve(test_case);
    }
}