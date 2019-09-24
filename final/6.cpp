#include <bits/stdc++.h>
using namespace std;

struct time{
int hours;
int minutes;
int seconds;
};

bool f (time a, time b){
	if (p.hours < t.hours) return true;
	if (p.hours == t.hours && p.minutes < t.minutes) return true;
	if (p.hours == t.hours && p.minutes == t.minutes && p.seconds < t.seconds) return true;
	return false;
}

int main(){

freopen ("input.txt", "r", stdin);
int n;
cin >> n;
time p[n];

		for (int i = 0; i < n; i++){
			cin >> p[i].hours >> p[i].minutes << p[i].seconds;
		}
	sort (p, p + n, f);

		for (int i = 0; i < n; i++){
			cout << p[i].hours << " " << p[i].minutes << " " << p[i].seconds << endl;
		}

return 0;
}