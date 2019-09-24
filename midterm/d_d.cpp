#include <bits/stdc++.h>
using namespace std;
int main(){

int k = 0;
string s;
cin >> s;

	for (int i = 0; i < s.size(); i++){
		if (s[i] == 'a') k++;
		else if (s[i] == 'e') k++;
		else if (s[i] == 'i') k++;
		else if (s[i] == 'o') k++;
		else if (s[i] == 'u') k++;
	}cout << k;

return 0;
}