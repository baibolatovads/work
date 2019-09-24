#include <bits/stdc++.h>
using namespace std;
int main(){

	int a, b, c;
	cin >> a >> b >> c;
	int max = a;

	if(a >= 94 && a <= 727 && b >= 94 && b <= 727 && c >= 94 && c <= 727){
		if(a < b) max = b;
		if (max < c) max = c;
		cout << max;
	}
	else cout << "Error";

return 0;
}