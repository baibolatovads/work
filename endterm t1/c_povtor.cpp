//Given a list of words. Print how many time each word is appeared in the list.

#include <bits/stdc++.h>
using namespace std;

int main(){

	freopen ("input.txt", "r", stdin);
	string x;
	map <string, int> m;

	while (cin >> x){
		m[x]++;
	}

map <string, int> :: iterator it;

	for (it = m.begin(); it != m.end(); it++){
		cout << (*it).first << " " << (*it).second << endl;
	}

return 0;
}
