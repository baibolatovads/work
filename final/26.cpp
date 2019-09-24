#include <bits/stdc++.h>
using namespace std;
int main(){

int n;
cin >> n;

	if (n % 11 == 0 && n % 10 != 3) cout << "BINGO";
	else cout << "FAIL";

return 0;
}