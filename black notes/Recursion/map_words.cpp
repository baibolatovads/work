#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	map<string, int> m;
	string words;
	while(cin>>words){
	m[words]++;
	}
	map<string, int> :: iterator it;
	for(it=m.begin(); it != m.end(); it++)
	cout<<(*it).first<<" "<<(*it).second << endl;
	return 0;
}