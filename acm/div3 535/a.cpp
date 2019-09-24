#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n;
	int l1, r1, l2, r2;
	bool l = false;
		for(int i = 0; i < n; i++){
			cin >> l1 >> r1 >> l2 >> r2;

		for(int i = l1; i <= r1; i++){
			for(int j = l2; j <= r2; j++){
				if(i != j){
					cout << i << " " << j << endl;
					l = true;
					break;
				}
			}
			if(l == true) break;
		}
	}



	return 0;
}