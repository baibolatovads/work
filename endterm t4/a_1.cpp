#include <bits/stdc++.h>
using namespace std;
int main(){

	string s;
	map <string, int> m;

	while (cin >> s){
		m.insert(s);
	}

	cout << m.size();

	map <string, int> :: iterator it;

	for (it = m.begin(); it != m.end(); it++){
		m[*it]++;
		cout << (*it).first << " " << (*it).second << endl;
	}
return 0;
}