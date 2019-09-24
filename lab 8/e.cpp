#include <bits/stdc++.h>

using namespace std;

int main(){

	int d = 0;
	string s;
	getline (cin, s);
	string x = s + ' ';
	for(int i = 0; i < x.size(); i++) {
		if(x[i] == ' ') d++;
	}
	cout << d;
/*	if (s!= " ")
		d++;
	cout << d << endl;
*/
return 0;
}