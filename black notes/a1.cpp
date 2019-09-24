#include <bits/stdc++.h>

using namespace std;

struct footbal{
	string name;
	int year;
	int goals;
};

bool f(footbal a, footbal b){
	if(a.name < b.name) return true;
	return false;
}

int main(){

	int n, x = 1;
	cin >> n;
	
	footbal l[n];
	

		for (int i = 0; i < n; i++){
			cin >> l[i].name >> l[i].year >> l[i].goals;
		}

	int k, m;
	cin >> k >> m;
	
		for (int i = 0; i < n; i++){
			if (l[i].year >= k && l[i].year <= m && l[i].goals>=k && l[i].goals <= m)
			x = 1;
}



for (int i = 0; i < n; i++){
if (x == 1 && f(l, n)){
	cout << l[i].name << endl;
}
}
	return 0;

}