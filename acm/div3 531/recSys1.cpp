#include <bits/stdc++.h>
#include "recSyys.h"
using namespace std;
int main(){

	freopen("input1.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

string UserGenre, UserIsbn, str, str1;
	map<string, string> m1;
	map<string, int> m2;
	vector<int> v;
	string str2;

	/*while(getline(cin, str)){
		str1 += str;
	}

	for(int i = 0; i < str1.size(); i++){
		if(str1[i] == '"'){
			while(str1[i] != ','){
				i++;
				if(str1[i] != '[' && str1[i] != ']' && str1[i] != '{' && str1[i] != '}'){
					str2 += str1[i];
				}
			}
		}
	}


	cout << str2;	


*/
	while(cin >> UserGenre >> UserIsbn){
		m1[UserGenre] += " " + UserIsbn;
		m2[UserGenre]++;
	}

map<string, int> :: iterator it;

	for(it = m2.begin(); it != m2.end(); it++){
		v.push_back((*it).second);
	}
sort(v.begin(), v.end());

	vector<string> v1;

	for(int i = v.size() - 1; i >= 0; i--){
		for(it = m2.begin(); it != m2.end(); it++){
			if((*it).second == i){
				v1.push_back((*it).first);
			}
		}
	}

	for(int i = 0; i < v1.size(); i++){
	for(it = m.begin(); it != m.end(); it++){
		if((*it).first == v1[i]) cout << (*it).second << endl; 
	}
}

	return 0;
}