#include <bits/stdc++.h>

using namespace std;

int main (){

	string t, d, y;
	getline (cin, t);

	for (int i = 0; i < t.size(); i++){
		d = t.erase(' ');
	}cout << d << endl;

	for (int i = t.size(); i > 0; i--){
		y = t.erase(' ' );
	}cout << y << endl;

	/*string f = d;
	d = y;
	y = f;*/

	cout << d << " " << y;
	return 0;
}