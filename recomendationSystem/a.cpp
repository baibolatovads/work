//рекомендательная система
#include <bits/stdc++.h>
using namespace std;
int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

		string genre, isbn;
		map<string, string> m;

		while(cin >> genre >> isbn){
			m[genre] = isbn;
		}

map<string, string> :: iterator it;

	for(it = m.begin(); it != m.end(); it++){
		cout << (*it).first << " " << (*it).second << endl;
	}
	
	return 0;
}