#include <bits/stdc++.h>
using namespace std;
int main(){

	string s;
	cin >> s;
	bool ok = true;
	int n = s.size();

	for(int i = 0; i < n/2; i++){
		if(s[i] != s[n - i - 1]) ok = false;
	}
	if(ok) cout << "YES";
	else cout << "NO";

return 0;
}