#include <iostream>
#include <map>
#include <sstream>
#include <vector>
#include <set>

using namespace std;

bool f(int x){
	int t = 1;

	while( t < x){
		t *= 2;
	}

	return x==t; //???????
}

int main(){

	freopen ("input.txt", "r", stdin);
	int x;
	set<int> s;
	while(cin >> x){
		if(f(x)){
			s.insert(x);
		}
	}

	set<int>::iterator it;

	for(it = s.begin(); it != s.end(); ++it){
		cout << *it << " ";
	}

	return 0;
}
//почему без freopen не считывает? и как вводит код, чтобы работал без freopen