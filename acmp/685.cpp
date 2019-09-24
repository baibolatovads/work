#include <bits/stdc++.h>
using namespace std;
int main(){

	int a, b, c, d, e, f;

	cin >> a >> b >> c >> d >> e >> f;

	vector<int> p;
	p.push_back(a);
	p.push_back(b);
	p.push_back(c);

sort(p.begin(), p.end());

	vector<int> w;
	w.push_back(d);
	w.push_back(e);
	w.push_back(f);

sort(w.begin(), w.end());

	cout << p[0] * w[0] + p[1] * w[1] + p[2] * w[2];

return 0;
}
