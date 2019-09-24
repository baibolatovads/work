#include <bits/stdc++.h>
using namespace std;

int main(){

	string s;
	cin >> s;

	int sum = 0, cnt = 0;

	for(int i = 0; i < s.size(); i++){
		if(s[i] == '0' || s[i] == '6' || s[i] == '9') cnt = 1;
		else if(s[i] == '8') cnt = 2;
		else cnt = 0;
		sum += cnt;
	}

	cout << sum;

return 0;
}