#include <bits/stdc++.h>

using namespace std;

int main(){

int n, m;
cin >> n >> m;
int a, b[m];
map<int, int> map;

	for(int i = 0; i < n; i++){
		cin >> a;
		map.insert(pair<int, int>(i, a));
	}

	for(int i = 0; i < m; i++){
		cin >> b[i];
	}


int index;
map <int, int> :: iterator it;
	for (it = map.begin(); it != map.end(); it++){
		for(int i = 0; i < m; i++){
		if(b[i] == (*it).first) index = it;
		else if (b[i] == (*it).first && b[i] == (*it + 1).first) index = it; 
		else index = 0;
		cout << index << endl;
	}
	}

return 0;
}

