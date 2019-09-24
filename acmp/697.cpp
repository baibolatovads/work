#include <bits/stdc++.h>
using namespace std;

int main(){

	int l, w, h;
	cin >> l >> w >> h;

	int s = 2*(l*h + h*w);
	int n = s/16;

	if(s%16 == 0) cout << n;
	else cout << n + 1;
return 0;
}