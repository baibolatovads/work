#include <bits/stdc++.h>
using namespace std;

int main(){

	//freopen ("input.txt", "r", stdin);
	//freopen ("output.txt", "w", stdout);
	string e = "2.7182818284590452353602875";
	int d;
	cin >> d;

		if (d == 0) cout << 3;
		else if (d < 0) cout << "";
		else {
			for (int i = 0; i < d + 2; i++){
				cout << e[i];
			}
		}

return 0;
}