#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	int n,a,b,c,d;
	cin >> n >> a >> b >> c >> d;
	int x[n];
	
	for(int i = 0; i < n; ++i){
		x[i] = i + 1;
	}

	reverse(x+a-1,x+b);
	reverse(x+c-1,x+d);


	for(int i = 0; i < n; ++i){
		cout << x[i] << " ";
	}


	return 0;
}