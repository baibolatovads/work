/*Given list of words. Each word contains only letters from ’a’ to ’z’.
 Erase all palindromes and duplicates
from text. Print words from text in ascending order in separate lines.
*/

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

bool f(string x){
	bool res = true;

	for(int i = 0; i < x.size()/2; ++i){
		if(x[i] != x[x.size() - i - 1]){
			res = false;
			break;
		}
	}

	return res;
}

int main(){

	set<string> s;
	set<string>::iterator it;

	string word;

	while(cin >> word){
		if(!f(word)){
			s.insert(word);
		}
	}

	for(it = s.begin(); it != s.end(); ++it){
		cout << *it << endl;
	}

	return 0;
}