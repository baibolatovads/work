#include <bits/stdc++.h>
using namespace std;

char low (string s){
	for (int i = 0; i < s.size(); i++){
		char c = s[i];
		if (c >= 'A' && c <= 'Z') return char (c + 32);
	return c;
}
}

int main (){

	string s;
	map <char, int> m;
	cin >> s;

	for (int i = 0; i < s.size(); i++){
		char c = low (s);
		m[c]++;
	}

	map <char, int> :: iterator it;

	for (it = m.begin(); it != m.end(); it++){
		cout << (*it).first << " " << (*it).second << endl;
	}
return 0;
}