/* Напишите программу, которая выводит все простые числа в диапазоне от 2 
до N ( N заранее неизвестно).
*/

#include <bits/stdc++.h>
using namespace std;
int main (){

int n;
cin >> n;

	for(int i = 2; i <= n; ++i){
		bool bad = 0;
		for(int j = 2; j * j <= i; ++j){
			if(i % j == 0) bad = 1;
		}
		if(bad == 0) cout << i << " ";
	}
	
return 0;
}


