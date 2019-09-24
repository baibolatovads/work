#include <bits/stdc++.h>

using namespace std;

int main(){

	string s, t, y, z;
	stringstream ss;
	getline (cin, s);

	
if (s.size()%2==0) {
//t = s.erase (0, s.size()/2);
y = s.erase (s.size()/2+1, 456);
z = s.insert(0, y);
}cout << z;


		return 0;
	}

	