/*You are given N competitors. Find those who passed to the next round.
Competitor will pass to next
round if he gains more than or equal K points.
Print number of competitors who passed to next round. And print info about them in 
ascending order by name. If names are equal order by surname in ascending order. 
If surnames are equal order by points in descending order.
2
A B 12
A B 1
1

2
A B 12
A B 1
*/

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

struct competitor{
	string name;
	string sname;
	double point;
};

bool f(competitor a, competitor b){
	if(a.name < b.name ) return true;
	if(a.name == b.name && a.sname < b.sname) return true;
	if(a.name == b.name && a.sname == b.sname && a.point > b.point) return true;
	return false;
}

int main(){

	string s;
	getline(cin,s);
	int n = atoi(s.c_str());

	competitor c[n];

	for(int i = 0; i < n; ++i){
		cin >> c[i].name >> c[i].sname >> c[i].point;
	}	

	getline(cin,s);
	
	getline(cin,s);
	int k = atoi(s.c_str());

	competitor passed[n];
	int m = 0;

	for(int i = 0 ; i < n; ++i){
		if(c[i].point >= k){
			passed[m]= c[i];
			m++; 
		}
	}

	cout << m << endl;
	
	sort(passed,passed + m,f);

	for(int i = 0 ; i < m; ++i){
		cout << passed[i].name << " " <<  passed[i].sname  << " " << passed[i].point << endl;
	}


	return 0;
}