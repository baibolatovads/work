#include <bits/stdc++.h>

using namespace std;

int main (){

string s;
cin >> s;
int k, m;

	for (int i = 0; i < s.size(); i++){
		for (int j = i + 1; j <= s.size(); j++){
			if (s[i] == '0' && s[j] == '0') k++;
			m = max (0, k);
		}
	}cout << m;

return 0;
}