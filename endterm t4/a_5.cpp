#include <bits/stdc++.h>
using namespace std;
int main(){

//freopen ("input.txt", "r", stdin);
	string s;
	char c;
	stringstream ss;
	map <char, int> m;
	cin >> s;
	ss << s;

	while(ss >> c){
		m[c]++;
	}

map <char, int> :: iterator it;

cout << m.size() << endl;

	for (it = m.begin(); it != m.end(); it++){
		cout << (*it).first << " " << (*it).second << endl;
	}

return 0;
}