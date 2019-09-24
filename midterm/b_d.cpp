#include <bits/stdc++.h>
using namespace std;
int main(){

int n;
cin >> n;

		for (int i = 100; i < 1000; i++){
			int a = i % 10;
			int b = (i / 10)%10;
			int c = i /100;
					if (a+b+c == n){
						cout << i << endl;
					}
		}
return 0;
}