#include <bits/stdc++.h>
using namespace std;
int main(){

	int x, y, k, b, t = 0;
	cin >> x >> y;

	for (int i = 1; i <= 1000; i++){
		for (int j = 1; j <= 1000; j++){
			if (i + j == x && i * j == y){
				if (i == j || i < j){
					cout << i << " " << j ;
				}
			}
		}
	}
return 0;
}