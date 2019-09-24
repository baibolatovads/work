#include <bits/stdc++.h>
using namespace std;

char small (char a){
	if (a >= 'A' && a <= 'Z') return (a + 32);
	return a;
}

int main(){

freopen ("input.txt", "r", stdin);
string word;
map <char, int> m;

	while (cin >> word){
		char c = small (word[0]);
		m[c]++;
	}

cout << m.size() << endl;

map <char, int> :: iterator it;

for (it = m.begin(); it != m.end(); it++){
		cout << (*it).first << " " << (*it).second << endl;
}

return 0;
}