#include <bits/stdc++.h>

using namespace std;

int main (){


string find;
cin >> find;
int t = 0;
string s;


freopen ("input.txt", "r", stdin);
while (cin >> s){
	if (s == find) {
		t++;
	}
}cout << t;

return 0;
}

