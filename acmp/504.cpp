#include <bits/stdc++.h>
using namespace std;

int main(){


	string s = "GCV";
	int k;
	cin >> k;
	char c;

	for(int i = 0; i < k; i++){
		c = s[1]; s[1] = s[2]; s[2] = c;
		c = s[0]; s[0] = s[1]; s[1] = c;
	} 

	cout << s;

return 0;
}
