/*Given pairs of string and int. Where string is name of the student and 
int is his score for programming
exam. One student can pass exam several times. Find best result for each 
student and print them in
ascending order by name.
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	freopen ("input.txt", "r", stdin);
	string name;
	int mark;
	map <string, int> m;

	while (cin >> name >> mark){
		if (m[name] < mark){
			m[name] = mark;
		}
	}

map <string, int> :: iterator it;

	for (it = m.begin(); it != m.end(); it++){
		cout << (*it).first << " " << (*it).second << endl;
	}

return 0;
}