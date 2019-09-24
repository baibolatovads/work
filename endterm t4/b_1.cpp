#include <bits/stdc++.h>
using namespace std;
int main(){

	string s, d;
	vector <char> v, x;
	char c, k;
	set <char> f;
	vector <char> :: iterator it;

	stringstream ss;
	cin >> s;
	ss << s;

	while (ss >> c){
		v.push_back(c);
	}

	cin >> d
	stringstream ss1;
	ss1 << d;

	while (ss >> k){
		x.push_back(k);
	}

	for (it = v.begin(); it != v.end(); it++){
		if (x.find(*it) != x.end())
			f.insert(*it);
	}

	for (it = x.begin(); it != x.end(); it++){
		if (v.find(*it) != v.end())
			f.insert(*it);
	}

set <char> :: iterator ot;

	for (ot = f.begin(); ot != f.end(); ot++){
		if (v.find(*it) == x.find(*it)){
			cout << "YES\n";
		}else cout << "NO\n"
	}
return 0;
}