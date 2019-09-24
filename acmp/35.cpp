#include <bits/stdc++.h>

using namespace std;

struct acmp {

	int m;
	int n;
};

void res (acmp a){
	int d = 19*a.m + (a.n+239)*(a.n + 366)/2;
	cout << d << endl;
}

int main (){

	int k;
	cin >> k;
	acmp d[k];

		for (int i = 0; i < k; i++){
			cin >> d[i].m >> d[i].n;
		}

		for (int i = 0; i < k; i++){
			res(d[i]);
		}

	return 0;
	} 
