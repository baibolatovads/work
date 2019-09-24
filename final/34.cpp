#include <bits/stdc++.h>
using namespace std;
int main(){

//freopen ("input.txt", "r", stdin);
int st[4], nd[4];
int d = 0, g = 0;

	for (int i = 0; i < 4; i++){
		cin >> st[i] >> nd[i];
	}

	for (int i = 0; i < 4; i++){
			if (st[i] > nd[i]) d++;
			else g++;
		}
	

	if (d > g) cout << "Yes";
	else if (d < g) cout << "No";
	else cout << "Re-election";

return 0;
}