#include <bits/stdc++.h>
using namespace std;
int main(){

	int a;
	map <int, int> m;

		while(cin >> a){
			if (a == 0) break;
			m[a]++;
		}

		for (int i = 0; i < 9; i++){
			cout << m[i + 1] << endl;
		}
return 0;
}