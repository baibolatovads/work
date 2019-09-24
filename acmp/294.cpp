#include <bits/stdc++.h>
using namespace std;

int main(){

	int kl, ll, ml;
	cin >> kl >> ll >> ml;
	int k2, l2, m2;
	cin >> k2 >> l2 >> m2;

	int sum = 0, count = 0;

	int lostb = (kl * ll)/100;
	int lostg = (k2 * l2)/100;

	int ch1 = kl - lostb;
	int ch2 = k2 - lostg;

	if(ch1 < ch2) {
		count = (ch2 - ch1) * m2;
	}
	else if(ch1 > ch2) count = (ch1 - ch2) * ml;

	sum = (lostb * ml) + (lostg * m2) + count;
	cout << sum;

return 0;
}
