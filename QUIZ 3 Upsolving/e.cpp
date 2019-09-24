#include <bits/stdc++.h>

using namespace std;

struct footbal{
	string name;
	int age;
	int goal;
};

bool isPrime(int x){
	if(x == 1) return false;

	bool res = true;

	for(int i = 2; i<= sqrt(x); ++i){
		if(x % i == 0){
			res = false;
			break;
		}
	}

	return res;
}

int primeCount(int a, int b){
	int res = 0;

	for(int i = a; i <=b; ++i){
		if(isPrime(i)) res++;
	}

	return res;
}


bool p(footbal a, footbal b){
	if (a.name < b.name) return false;
	return true;
}

int main (){

int n;
cin >> n;
footbal f[n];

	for (int i = 0; i < n; i++){
		cin >> f[i].name >> f[i].age >> f[i].goal;
	}

int k, m;
cin >> k >> m;


sort (f, f + n, p);

int b = primeCount(k,m);


	for (int i = 0; i < n; i++){
		if (f[i].age >= k && f[i].age <= m && f[i].goal == b){
			cout << f[i].name << endl;
		}
	}

	return 0;
}
