#include <bits/stdc++.h>
using namespace std;

bool f (string s){
	bool res = true;
	for (int i = 0; i < s.size()/2; i++){
		if (s[i] != s[s.size() - i - 1]) res = false;
	}return res;
}

int main(){

string s;
cin >> s;

	if (f(s)) cout << "YES";
	else cout << "NO";

return 0;
}