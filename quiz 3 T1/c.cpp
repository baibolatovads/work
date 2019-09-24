/*You are given string and char in separate lines. Write function to 
finding the number of occurrences of char in given string with case insensitive mode.

hello world!
o

2
*/

#include <bits/stdc++.h>

using namespace std;

char to_lower(char c){
	if(c <='Z' && c >= 'A') return char(c+32);
	return c;
}

int f(string s, char c){
	int res = 0;

	for(int i = 0; i < s.size(); ++i){
		if(to_lower(s[i]) == to_lower(c)){
			res++;
		}
	}

	return res;
}

int main (){
	string str;
	char c;
	getline(cin,str);
	cin >> c;

	cout << f(str,c) << endl;

return 0;
}