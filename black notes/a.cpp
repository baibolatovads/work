#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

struct footbal{
	string name;
	int year;
	int goals;
};

int main (){
	int n;
	cin >> n;
	footbal l[n];
	int k, m, b, d=0;
	cin >> k >> m;
	b>=k;
	b<=m;

		for (int i = 0; i < n; i++){
			cin >> l[i].name >> l[i].year >> l[i].goals;
		}

		for (int i = 0; i < n; i++){
			if (l[i].year>=k && l[i].year <= m && l[i].goals==b){ 
				d++;
			
		cout << l[i].name << " " << l[i].surname << endl;
	}}cout << d;
	return 0;

}
