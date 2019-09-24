#include <iostream>
#include <cmath>
using namespace std;

int main (){

int m, n ,k;
int res = 0;

	cin >> m >> n >> k;

if (n<k) {
	res = 2*m;
}else {
	res = 2*n/k*m;
if (2*n%k!=0)
res+=m;
}
cout <<res;
return 0;
}