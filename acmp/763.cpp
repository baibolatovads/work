#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int x, y;
	cin >> x >> y;

	if(x == 1 && y == 1) cout << 0;
	else if(x != y) cout << 1;
	else cout << 2;
	return 0;
}