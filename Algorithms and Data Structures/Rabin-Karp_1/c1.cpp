#include <iostream>
#include <vector>

using namespace std;

vector<int> prefix_function(string s) {
    int n = s.size();
    vector<int> p(n);

    for (int i = 1; i < n; i++) {
        int j = p[i - 1];
        while (j > 0 && s[j] != s[i]) 
            j = p[j - 1];
        if (s[j] == s[i]) j++;
        p[i] = j;
    }
    return p;
}

int main() {
    string s, t;
    cin >> s >> t;
    string s1 = t + "#" + s;
    vector<int> r = prefix_function(s1);
    for (int i = 0; i < s1.size(); ++i)
        cout << r[i];
    return 0;
}