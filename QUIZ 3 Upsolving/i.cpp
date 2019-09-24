#include <bits/stdc++.h>

using namespace std;

int main (){

string s;
cin >> s;
vector<int> d;

	for (int i = 0; i < s.size(); i++){
		if (s[i] <= '9' && s[i] >= '0'){
			cout << s[i];
			 	
		}
	}cout << endl;

	vector <int> :: iterator it;
	for (it = d.begin(); it != d.end(); it++){
		cout << *it << " ";
	}
	return 0;
}