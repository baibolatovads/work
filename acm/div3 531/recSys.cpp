//рекомендательная система
#include <bits/stdc++.h>
using namespace std;
int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

		string genre, isbn;
		public map<string, string> m;

		while(cin >> genre >> isbn){
			m[genre] += " " + isbn;
		}

	string UserGenre, UserIsbn;
	map<string, string> m1;
	map<string, int> m2;
	vector<int> v;

	while(cin >> UserGenre >> UserIsbn){
		m1[UserGenre] += " " + UserIsbn;
		m2[UserGenre]++;
	}

map<string, int> :: iterator it;

	for(it = m2.begin(); it != m2.end(); it++){
		v.push_back((*it).second);
	}
sort(v.begin(), v.end());

	vector<string> v1;

	for(int i = v.size() - 1; i >= 0; i--){
		for(it = m2.begin(); it != m2.end(); it++){
			if((*it).second == i){
				v1.push_back((*it).first);
			}
		}
	}

	for(int i = 0; i < v1.size(); i++){
		cout << v1[i] << endl;
	}

/* map<string, string> :: iterator it;

	for(it = m.begin(); it != m.end(); it++){
		cout << (*it).first << " " << (*it).second << endl;
	}*/

	return 0;
}	