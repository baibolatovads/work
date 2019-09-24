#include <bits/stdc++.h>

using namespace std;

bool f(int x, int y){
	if(x > y) return true;
	return false;
}

int main(){

	vector<int> v;

	for(int i = 0; i < 10; ++i){
		v.push_back(i);
	}

	sort(v.begin(),v.end(),f);

	vector<int>::iterator it;
	
	for(it = v.begin(); it != v.end(); ++it){
		cout << *it << endl;
	}
	
	return 0;
}