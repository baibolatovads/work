#include <bits/stdc++.h>
using namespace std;

int main(){

	int n, m;
	cin >> n >> m;
	if(n == 0 && m != 0) cout << "Impossible";
	else if(n > 0 && m == 0) cout << n << " " << n;
	else if(n == 0 && m == 0) cout << 0 << " " << 0;
	else if(n >= m){
		cout << n << " " << n + m - 1;
	}
	else {
		int min = m;
		int max = n + m - 1;
		cout << min << " " << max;
	}

	return 0;
}