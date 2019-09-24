#include <iostream>
using namespace std;
int main() {
    int v, a, s, d, f, t;
    cin >> v;
    a = (v/ 1000);
    s = (v / 100 % 10);
    d = (v / 10 % 10);
    f = (v % 10);
    t = (a - f)*(a - f) + (s - d)*(s - d) + 1;
    cout << t;
    return 0;
}