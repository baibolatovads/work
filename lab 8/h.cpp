#include <bits/stdc++.h>

using namespace std;

int main(){

	string s;
	getline (cin, s);

	for (int i = 0; i<=s.length(); i++){
		if (s[0]==s[i])
			s[0] = s[i]; 
		}cout << s[0];
return 0;
}