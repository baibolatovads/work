#include <bits/stdc++.h>
using namespace std;


int main(){

	freopen ("input.txt", "r", stdin);
	string word;
	map <string, int> m;

	while (cin >> word){
		m[word]++;
	}

map <string, int> :: iterator it;

cout << m.size() << endl;

	for (it = m.begin(); it != m.end(); it++){
		cout << (*it).first << " " << (*it).second << endl;
	}

return 0;
}

