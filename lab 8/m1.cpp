#include <bits/stdc++.h>

using namespace std;

int main(){

	string s;
	stringstream ss;
	getline (cin, s);
	int k, l;
	cin >> k >> l;
	ss << s;

	for (int i = 1; i < s.length()/2; i++){
		for (int j = s.length()/2; j < string :: npos; j++){
			k = i; l = j;
			 swap (s[k], s[l]);
			 ss >> s;
			}
		}cout << s;
	

	return 0;
}