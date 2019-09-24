#include <bits/stdc++.h>
using namespace std;

int f(int n){
	if(n == 0 || n == 1) return 1;
	if (n % 2 == 0) return f(n/2) + f(n/2 - 1);
	else return f((n-1)/2) - (f(n-1)/2 - 1);
}
int memoization(int n){
	f(n);
	map<int, int> cache;
	map <int, int> :: iterator it;
	for(it = cache.begin(); it != cache.end(); it++){
		if(n != (*it).first) cache.insert(pair<int, int>(n, f(n)));
	}
	return cache[f(n)];
}
int main(){

int n;
cin >> n;
	cout << memoization(n);
 return 0;
}