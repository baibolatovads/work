#include <bits/stdc++.h>
using namespace std;

int main(){

	string s;
	cin >> s;

	if(s[0] == 'A' || s[0] == 'C' || s[0] == 'E' || s[0] == 'G'){
		if(s[1] % 2 == 0){
			cout << "WHITE";
		}
		else cout << "BLACK";
	}
	else{
		if(s[1] % 2 != 0){
			cout << "WHITE";
		}
		else cout << "BLACK";
	}

return 0;
}