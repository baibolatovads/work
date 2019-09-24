#include <bits/stdc++.h>

using namespace std;

struct footbal {

string name;
int year;
int balls;

};

bool f (footbal d){
	int k, m;
	if (d.year >= k && d.year <= m) return true;
	return false;
}

int main(){        

	int n;
	cin >> n;
	footbal p[n];

		for (int i = 0; i < n; i++){
			cin >> p[i].name >> p[i].year >> p[i].balls;
		}

	int k, m;
	cin >> k >> m;
	//b >= k; b <= m;

		for (int i = 0; i < n; i++){
			if (f(p[i])) cout << p[i].name << endl;
		}

	return 0;
}

