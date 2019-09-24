#include <bits/stdc++.h>
using namespace std;
int main(){

	int n;
	cin >> n;
	string e = "2.7182818284590452353602875";

	if(n == 0) cout << 3;
	cout << "2.";
	for(int i = 2; i <= n; i++){
		cout << s[i];
	}
	if(s[n + 2] >= '5') cout << char(s[n + 1] + 1);
	else cout << s[n + 1];
return 0;
}