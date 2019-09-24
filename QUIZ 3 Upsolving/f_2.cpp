#include <bits/stdc++.h>
using namespace std;
int main(){

freopen ("input.txt", "r", stdin);
	string s, line;
	cin >> s;
	int n = 0;

	while(cin >> line){
		if(s == line) n++;
	}cout << n;

return 0;
}