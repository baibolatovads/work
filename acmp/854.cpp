#include <bits/stdc++.h>
using namespace std;

int main(){

	int tr, tc, t;
	string r;

	cin >> tr >> tc >> r;

	if(tr <= tc){
		if(r == "heat") t = tc;
		else if(r == "freeze") t = tr;
		else if(r == "auto") t = tc;
		else if(r == "fan") t = tr;
	}
	else if(tr > tc){
		if(r == "heat") t = tr;
		else if(r == "freeze") t = tc;
		else if(r == "auto") t = tc;
		else if(r == "fan") t = tr;
	}

	cout << t;

return 0;
}