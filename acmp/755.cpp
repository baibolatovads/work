#include <bits/stdc++.h>
using namespace std;
int main(){

	int x, y, z;
	cin >> x >> y >> z;

	int res = (x + y) - z;

	if(res < 0) cout << "Impossible";
	else cout << res;

return 0;
}