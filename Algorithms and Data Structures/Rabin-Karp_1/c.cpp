 #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	string g, f;
	int k = 0, l = 0, cnt = 0;
	vector<string> s;
	bool found = true;
	map<string, int> m;
	map<string, int> :: iterator it;

	while(cin >> n && n != 0){
		for(int i = 0; i < n; i++){
			cin >> f;
			s.push_back(f);
			cout << "ok1" << endl;
		}
		cin >> g;
		cout << "ok2" << endl;
		while(k != g.size()){
			for(int i = 0; i < n; i++){
				if(g[k] == s[i][l]){
					k++;
					l++;
					if(l == s[i].size()){
						cnt++;
					}
					cout << "ok3" << endl;
				}
				else if(l == 0){
					k++;
					if(k == s[i].size()){
						found = false;
					}
				}
				else l = s[i][l - 1];
				/*if(k == g.size()){
					m[s[i]] += cnt;
				}*/
			}
		}
	}

	if(found == false) cout << "Not found";
	else{
		for(it = m.begin(); it != m.end(); it++){
			cout << (*it).first << endl << (*it).second << endl;
		}
	}

return 0;
	}