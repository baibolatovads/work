#include <bits/stdc++.h>
using namespace std;

int main (){

string s;
cin >> s;
int k = 0;
int t = 0;

	for (int i = 0; i < s.size(); i++){
		if (s[i] == '0') 
			break;
			k++; 
		t = max(t, k);
	}cout << t;

return 0;
}