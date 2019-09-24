#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	int n, m;
	cin >> s >> n >> m;
	for(int i = n, j = m; i < (m-n) / 2, i < j; i++, j--)
		swap(s[i], s[j]);
	cout << s;
return 0;
}