#include <bits/stdc++.h>
using namespace std;

int main(){

	string s;
	cin >> s;
	bool ok = true;

		for(int i = 0; i < s.size(); i++){
			if(s[i] == '0') ok = false;
		}

		if(ok) cout << "YES";
		else cout << "NO";

return 0;
}