#include <bits/stdc++.h>

using namespace std;

int main (){

int k;
 cin >> k;
 int n[k], m[k];
int d;

 	for (int i = 0; i < k; i++){
 		cin >> n[i] >> m[i];
 	}

 	for (int i = 0; i < k; i++){
 		d = 19*m[i] + (n[i] + 239)*(n[i] + 366) / 2;
 		cout << d << endl;
 	}

 return 0;
}