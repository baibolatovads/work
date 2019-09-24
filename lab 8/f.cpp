#include <bits/stdc++.h>

using namespace std;

int main(){

	stringstream ss;
	string s, t;
	getline (cin, s);

	ss << s;

	string winner = "";

	while (ss >> t){
		if (winner.size() < t.size()){
			winner = t;
		}
	}

	cout << winner << endl << winner.size() << endl;

return 0;
}
