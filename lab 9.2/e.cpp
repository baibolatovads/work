#include <bits/stdc++.h>

using namespace std;

void f(string s){
	int n = s.size();
for (int i = 0; i <= s.size()-2; i++){
	cout << s[i] << "*" ;
}cout << s[n-1];
}

int main (){
	string s;
	cin >> s;

	f(s);

return 0;
}