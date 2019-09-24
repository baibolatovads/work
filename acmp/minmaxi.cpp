#include <bits/stdc++.h>
using namespace std;
int main(){

freopen ("input.txt", "r", stdin);
//freopen ("output.txt", "w", stdout);
int mx = -10000, mn = 10000, a , k = 0;
while(cin >> a){
	k += 1;
	if (k % 2 == 0 && mx < a) mx = a;
	else if (k % 2 != 0 && mn > a) mn = a;
}cout << mn + mx;
return 0;
}