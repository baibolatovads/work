#include <bits/stdc++.h> 
using namespace std;
int main (){
	int maximum;
	stringstream ss;
	string s;
	cin >> s;
	ss << s;
while (ss>>s){
	for (int i = 0; i<s.size(); i++){
		maximum = max (s[0], s[i]);
	}
}cout << maximum;
return 0;
}