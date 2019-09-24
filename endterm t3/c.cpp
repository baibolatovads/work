#include <bits/stdc++.h>
using namespace std;
int main(){

	//freopen ("input.txt", "r", stdin);
	string text, best, last;
	map <string, int> m, n;

	while (cin >> text){
		if (best.size() < text.size()){
			best = text;
			m[best]++;
		}

		if (last.size() > text.size()){
			last = text;
			n[last]++;
		}
	}

map <string, int> :: iterator it;

	for (it = m.begin(); it != m.end(); it++){
		cout << (*it).second << endl;
	}

	for (it = n.begin(); it != n.end(); it++){
		cout << (*it).second << endl;
	}

return 0;
}