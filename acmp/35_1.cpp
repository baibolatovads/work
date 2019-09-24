#include <bits/stdc++.h>
using namespace std;

struct kontrol{

int n;
int m;

};


int main (){

	auto k, p;
	cin >> k;
	kontrol d;

		for (int i = 0; i < k; i++){
			cin >> d[i].n >> d[i].m;
		}

		for (int i = 0; i < k; i++){
			p = 19*d[i].m + (d[i].n+239)*(d[i].n+366)/2;
			cout << p << " ";
		}

return 0;
}