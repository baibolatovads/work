#include <bits/stdc++.h>
using namespace std;
int main(){

	int n;
	cin >> n;
	string s;
	int cnt = 0;

		for(int i = 0; i < n; i++){
			cin >> s;
			if(s[2] == 'A') cnt++;
		}

		cout << cnt;
return 0;
}