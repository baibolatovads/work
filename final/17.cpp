#include <bits/stdc++.h>
using namespace std;
int main(){

int n[5];
double k, d = 0;

	for (int i = 0; i < 5; i++){
		cin >> n[i];
		d = d + n[i];
	}k = d/5;

	printf("%.6f\n",k);

return 0;
}
