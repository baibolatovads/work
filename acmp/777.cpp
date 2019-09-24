#include <bits/stdc++.h>
using namespace std;

int main(){

	int s, t;
	cin >> s >> t;

	if(s <= t) cout << t - s;
	else cout << 12 - s + t;

return 0;
}
