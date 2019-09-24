#include <iostream>
#include <cmath>
using namespace std;

bool Xor (bool x, bool y){
	if (x==0 && y==1) return true;
	if (x==1 && y==0) return true;
	return false;
}

int main (){
	bool k, m;
	cin >> k >> m;
	cout << Xor(k, m) << endl;
}