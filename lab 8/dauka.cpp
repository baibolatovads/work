#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n;
string s, t = "";

int main() {
	getline(cin, s);
	n = s.size();
	for(int i = 0; i < n; i++) {
		if(s[i] != ' ')
			t += s[i];
	}
	n = t.size();
	for(int i = 0, j = n - 1; i < n/2, i < j; i++, j--) 
		if(t[i] != t[j]) {
			cout << "no";		
			return 0;
		}
	cout << "yes";
	return 0;
}
