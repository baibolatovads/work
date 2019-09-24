#include <bits/stdc++.h>
using namespace std;

int main (){

string g;
getline (cin, g);
char a;
cin >> a;
int d = 0;
char k;

	for (int i = 0; i < g.length(); i++){
		k = g[i];
		if (k == a + 32 || k == a - 32) a = k;
		if (g[i] == a) d++;
	}cout << d ;




	return 0;
}