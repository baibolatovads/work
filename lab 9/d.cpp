#include <iostream>
#include <cmath>
using namespace std;

bool Golosovanie (bool x, bool y, bool z){
	
	if ((x+y+z)>1) return 1;
	return 0;
}

int main (){
	bool k, m, t;
	cin >> k >> m >> t;
	cout << Golosovanie(k, m, t) << endl;
	return 0;
}