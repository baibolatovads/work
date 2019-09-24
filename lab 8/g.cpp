#include <bits/stdc++.h>

using namespace std;

int main(){

	string s;
	cin >> s;
	int n = s.length();
	bool ok = true;

	for(int i = 0; i < n/2; i++){
		if (s [i] != s[n-i-1]){
			ok = false;
			break;
		}
	}
	if(ok) {
		cout << "yes";
	}else {
		cout << "no";
	} 

return 0;
}