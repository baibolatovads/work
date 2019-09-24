#include <bits/stdc++.h>
using namespace std;
int main(){

int n, m, l, z;
cin >> n >> m;
int a[n][m];
int s = 0;

for (int i = 0; i < n; ++i){
	for (int j = 0; j < m; ++j){
		l = min (a[n], a[m]);
		z = max (a[n], a[m]);
		if (l==z) continue;
			s++;
	}
}

for (int i = 0; i < n; ++i){
	for (int j = 0; j < m; ++j){
		
	}
}cout << s << endl; 
return 0;
}














}

