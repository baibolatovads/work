#include <bits/stdc++.h>
using namespace std;

struct time {

int hours;
int minutes;
int seconds

};

bool f (time a, time b){
	if (a.hours < b.hours) return true;
	if (a.hours == b.hours && a.minutes < b.minutes) return true;
	if (a.hours == b.hours && a.minutes == b.minutes && a.seconds < b.seconds) return true;
	return false;
}

int main(){

	int n;
	cin >> n;
	time t[n] = new time();

		for (int i = 0; i < n; i++){
			cin >> t[i].hours >> t[i].minutes >> t[i].seconds;
		}

sort (t, t + n, f);

		for (int i = 0; i < n; i++){
			cout << t[i].hours << t[i].minutes << t[i].seconds << endl;
		}
return 0;
}