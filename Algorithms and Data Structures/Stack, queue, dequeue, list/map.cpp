/*Необходимо вывести список школьников по классам: сначала всех учеников 
9 класса, затем – 10, затем – 11. Внутри одного класса порядок вывода 
фамилий должен быть таким же, как на входе.*/
#include <bits/stdc++.h>
using namespace std;

map<int, vector<string> > mp;
map<int, vector<string> > :: iterator it;

int main(){

	freopen("input.txt", "r", stdin);
	int n;
	string s;
	while(cin >> n >> s){
		mp[n].push_back(s);
	}

	for(it = mp.begin(); it != mp.end(); it++){
		for (int i = 0; i < it -> second.size(); i++){
			cout << it -> first << " " << it -> second[i] << "\n";
		}
	}
	return 0;
}
