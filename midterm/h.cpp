#include <iostream> 
#include <cmath>
using namespace std; 
int main() {

int n, m=0;
cin >> n;
int a[n];


	for (int i = 0; i < n; i++){
	cin >> a [i];
}

int k = -1;

	for (int i = 0; i < n; i++)
	{
		if (k < a[i])
			k = a[i];
	}
	for (int i = 0; i < n; i++)
	{	
	if (k==a[i])
		m++;
	}
	cout << m;

return 0;
}