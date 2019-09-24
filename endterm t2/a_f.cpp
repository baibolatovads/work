#include <bits/stdc++.h>
using namespace std;

int main(){

	freopen ("input.txt", "r", stdin);
	char c;
	map <char, int> m;

	while (cin >> c){
		m[c]++;
	}

map <char, int> :: iterator it;

	for (it = m.begin(); it != m.end(); it++){
		cout << (*it).first << " " << (*it).second << endl;
	}
return 0;
}