#include <bits/stdc++.h>

using namespace std;

int max(string s){
	for(int i = 0; i < s.length(); i++){
		int k;
		k = max(s[0], s[i]);
	return k;
}
}

int main (){
	string s;
	getline(cin, s);

cout << max(s);
	

	return 0;
}