#include <bits/stdc++.h>
using namespace std;
int main(){

	int n;
	cin >> n;
	string name;
	vector<string> v;
	bool ok = true;

		for(int i = 0; i < n; i++){
			cin >> name;
			for(int i = 0; i < v.size(); i++){
				if(v[i] == name){
					ok = false;
					break;		
				}
				else {
					ok = true;
					v.push_back(name);
				}
			}
			if(ok == false) cout << "user already exists" << endl;
			else cout << "new user added" << endl; 
		}

	return 0;

}