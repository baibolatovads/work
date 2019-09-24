#include <bits/stdc++.h>

using namespace std;

int main (){

	set<int> a;
	set<int> b;
	int n;
	int k, p = 0;
	freopen ("input.txt", "r", stdin);
	while (cin >> n){
		a.insert(n);
	}

	while (cin >> k){
		b.insert(k);
	}

	set<int> :: iterator it;
	

	for(it=a.begin(); it!=a.end(); it++){
		if(b.find(*it)!=b.end()){
			p++;
		
		}
	}

	for(it=b.begin(); it!=b.end(); it++){
		if(a.find(*it)!=a.end()){
			p++;
			
		}
	}cout << p << endl;
	

	return 0;
}