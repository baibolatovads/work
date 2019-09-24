#include <bits/stdc++.h>
using namespace std;

int main(){

	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	string f = "qwertyuiopasdfghjklzxcvbnmq";
	char d;
	cin >> d;
	int j = f.find(d);

	cout << f[j+1];

return 0;
}