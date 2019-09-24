#include <bits/stdc++.h>

using namespace std;

int main(){

	stringstream ss;
	string s;

	getline (cin, s);
	ss << s;
	int i, j;
	cin >> i >>j;
	while (ss>>s){
	for (int k = 1; i <= (i+j)/2; k++){
		swap (s[k], s [i+j-k]);

		} cout << s;
	}
return 0;
}