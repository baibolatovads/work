#include <bits/stdc++.h>
using namespace std;
int main(){

	int n;
	cin >> n;
	int s , k = 0;
	if (n==1)
	{
		cout << "NO";
		return 0;
	}

	for (int i = 1; i <= n; i++)
	{
		if (n%i==0)
			k++;
		
	}if(k > 2)
	{
		cout << "NO";
	}else
	{
		cout << "YES";
	}
	


return 0;
}