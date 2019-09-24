#include <bits/stdc++.h>

using namespace std;

struct cancel{

string sname;
string name;
int mark;

};

bool f (cancel a, cancel b){
	if (a.name < b.name) return true;
	if (a.name == b.name && a.sname < b.sname) return true;
	if (a.name == b.name && a.sname == b.sname && a.mark > b.mark) return true;
	return false;
}

int main(){

	int n;
	cin >> n;
	cancel s[n];

		for (int i = 0; i < n; i++){
			cin >> s[i].sname >> s[i].name >> s[i].mark;
		}

		sort (s, s + n, f);

	int k, t = 0;
	cin >> k;

		for (int i = 0; i < n; i++){
			if (s[i].mark >= k)
				t++;
		}cout << t << endl;

		for (int i = 0; i < n; i++){
			if (s[i].mark >= k){
				cout << s[i].sname << " " << s[i].name << " " << s[i].mark << endl;
			}
		}
return 0;
}