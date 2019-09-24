#include <bits/stdc++.h>
using namespace std;

int main(){

	int a, b, c, d, ars = 0, bars = 0;

	cin >> a >> b;
	bars+= a;
	ars += b;
	cin >> c >> d;
		bars += d;
		ars+= c;

		if(bars > ars) cout << "Barsenal" << endl;
		else if(bars < ars) cout << "Arselona" << endl;
		else {
			if(b > d) cout << "Arselona" << endl;
			else if (d > b) cout << "Barsenal" << endl;
			else cout << "Friendship" << endl;
		}
		cout << bars << " " << ars << endl;

	return 0;
}