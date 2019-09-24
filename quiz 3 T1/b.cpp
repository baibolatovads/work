/*You are given string. Remove all non-digit chars. Write function for 
finding the integer part of the root for number which constructed from leaved chars.
k1b4t4u
12
*/
#include <iostream>
#include <cmath>

using namespace std;

bool is_digit(char c){
	if(c<='9' && c >='0') return true;
	return false;
}

int f(string s){
	int temp = 0;

	//k1b4t4u
	for(int i = 0; i < s.size(); ++i){
		if(is_digit(s[i])){
			temp = temp * 10 + int(s[i] - 48);
		}
	}

	return int(sqrt(temp));
}

int main(){

	string str;
	getline(cin,str);
	cout << f(str) << endl;

	return 0;
}