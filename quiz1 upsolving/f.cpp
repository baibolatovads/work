#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){

	int a, b, c;
	cin >> a >> b >> c;
	int max = a;
	int min = b;


	if (min > a){
		min = a;
	}if (min > c){
		min = c;
	}cout << min << endl;
	
	if (max < b){
		max = b;
	}if (max < c){
		max = c;
	}cout << max;

return 0;
}
