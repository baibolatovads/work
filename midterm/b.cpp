#include <bits/stdc++.h>
using namespace std;
int main(){

	int s;
	cin >> s;
	

	for (int i = 100; i<1000; ++i){
		int a = i%10; 
		int b = (i/10)%10;
		int c = i/100;
			if (a+b+c==s){
				cout << i << endl; 
			}
}
		

return 0;
}