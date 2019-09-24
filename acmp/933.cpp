#include <bits/stdc++.h>
using namespace std;

int main(){

	int a, b, c, t;
	cin >> a >> b >> c >> t;

	if(t <= a) cout << t*b;
	else cout<< a*b + c*(t - a);

return 0;
}