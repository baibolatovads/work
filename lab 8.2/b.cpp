#include <bits/stdc++.h>

using namespace std;

int main(){

	string s;
	int k = 0;
	getline (cin, s);

	for (int i = 0; i < s.size(); i++){
		if (s[i]==' ') k++;
	}cout << k + 1;

	return 0;
	} 