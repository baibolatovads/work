#include <bits/stdc++.h>
using namespace std;
int main (){
	long long n, s = 0;
	cin >> n;

	
	if(n>0){
		for (int i = 1; i <= n; i++)
			s = s+i;
	}
	else
	{
		for(int i=1; i>=n; i--)
		{
			s += i;
		}
	}
cout << s;
	
return 0;
}