#include <bits/stdc++.h>

using namespace std;

void f (string s){
	int k = 0;
	for (int i = 0; i < s.size(); i++){
	if (s[i] <= '9' && s[i] >= '0') k++;
	}cout << k;
}

int main (){

	string s;
	cin >> s;

	f(s);

return 0;
}