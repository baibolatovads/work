#include <bits/stdc++.h>
using namespace std;

int main(){

int n;
cin >> n;
string a;	
map<string, int> m;
vector<int> v;

	for(int i = 0; i < n; i++){
		cin >> a;
		m[a]++;
	}

map<string, int> :: iterator it;

for(it = m.begin(); it != m.end(); it++){
	cout << (*it).first;
	break;
	//v.push_back((*it).second);
}

return 0;
}