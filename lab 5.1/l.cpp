#include <iostream> 
#include <cmath>
#include <algorithm>
using namespace std; 
int main() {

int n;
cin >> n;
int a[n];

for (int i=0; i < n; ++i){
	cin >>  a[i] ;
}

int p;
cin >> p;
n = 0;
for(int i = 1; i < n; ++i){
		if (p>a[i])
		cout << i << endl;
	}

//for (int i=0; i < n; ++i){
//} cout << n+1;

return 0;
}