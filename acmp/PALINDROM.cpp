#include <bits/stdc++.h>
using namespace std;

int main(){

		string s;
		cin >> s;

		int n = s.size();
		bool ok = true;

		for(int i = 0; i <= n/2; i++){
			if(s[i] != s[n - i - 1]) ok = false; 
		}

		if(ok == false) cout << "NO";
		else cout << "YES";
	return 0;
}