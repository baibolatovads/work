#include <bits/stdc++.h>
using namespace std;
int main(){

	string s;
	cin >> s;
	bool ok = true;

	for (int i = 0; i < s.size()/2; i++){
		for (int j = s.size(); j > s.size()/2 ; j--){
			if (s[i] != s[j]) ok = false; 
			else ok = true;
		}
	}

	if (ok) {
		cout << "yes";
	}
	else {
		cout << "no";
	}
return 0;
}