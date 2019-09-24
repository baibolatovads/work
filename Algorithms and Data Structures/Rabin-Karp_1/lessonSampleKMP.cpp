#include <iostream>
#include <vector>

using namespace std;

void prefix_function(string s, int t) {
    int n = s.size();
    int cnt = 0;
    vector<int> p(n);
    vector<int> d;

    for (int i = 1; i < n; i++) {
        int j = p[i - 1];
        while (j > 0 && s[j] != s[i]) 
            j = p[j - 1];
        if (s[j] == s[i]) {
        	j++;
        	if(j == t) {
        		cnt++;
        		d.push_back(i);
        	}
        }
        p[i] = j;
    }

    if(cnt > 0){
       		cout << cnt << endl;
       		for(int k = 0; k < d.size(); k++){
       			cout << d[k] << " ";
       		}
       	}
       	else cout << "Not Found" << endl;
}

int main() {
    string s, t;
    cin >> s >> t;
    string s1 = t + "#" + s;
    int n = t.size();
    prefix_function(s1, n);
    return 0;
}