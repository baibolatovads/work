/*В заданном тексте найти длину слова которое является наидлиннейшим палиндромом и содер-
жит одинаковые символы. Словом считается часть текста набор букв которого не содержит пробел.
Решение оформите через функцию.

7
If you want to build a web

1 
*/

#include <iostream>

using namespace std;

bool f(string s){
	bool res = true;

	for(int i = 1; i < s.size(); ++i){
		if(s[i] != s[i-1]){
			res = false;
			break;
		}
	}

	return res;
}

int main(){

	int n;
	cin >> n;
	string s;
	string best;

	for(int i = 0; i < n; ++i){
		cin >> s;
		if(f(s) == true){
			if(best.size() < s.size()){
				best = s;
			}
		}
	}

	cout << best.size() << endl;
	
	return 0;
}