#include <bits/stdc++.h>
using namespace std;

int f(int i, int j){
	if (i == 1 || j == 1) return 1;
	else return f(i - 1, j) + f(i, j - 1);
}

int main(){

int n, m;
cin >> n >> m;
 cout << f(n, m);

return 0;
}