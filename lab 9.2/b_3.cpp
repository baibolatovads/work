#include <bits/stdc++.h>

using namespace std;

void d (string s){

	for (int i = 0; i < s.size(); i++){
		if (s[0] < s[i])
			s[0] = s[i];
	}cout << s[0];
}

int main(){

	string s;
	cin >> s;

	d(s);

return 0;
}