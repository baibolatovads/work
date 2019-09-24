#include <bits/stdc++.h>
using namespace std;

int main (){

int n[4], m[4];
int t = 0, p = 0;


	for (int i = 0; i < 4; i++){
		cin >> n[i];
		t = t + n[i];
	}

	for (int i = 0; i < 4; i++){
		cin >> m[i];
		p = p + m[i];
	}

	if (t > p) cout << "1";
	else if (t < p) cout << "2";
	else if (t == p) cout << "DRAW";

return 0;
}