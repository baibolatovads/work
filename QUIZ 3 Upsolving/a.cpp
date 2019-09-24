#include <bits/stdc++.h>
using namespace std;

struct piramida{

	int h;
	int a;
	int b;
	int c;
	double area;
};

bool f(piramida s, piramida d){
	
	if(s.area > d.area) return true;
	if (s.area == d.area && s.h > d.h) return false;
	return true;
}

int main (){

	int n;
	cin >> n;
	piramida p[n];
	double t;

		for (int i = 0; i < n; i++){
			cin >> p[i].h >> p[i].a>> p[i].b >>	p[i].c;
			t = (p[i].a + p[i].b + p[i].c)/2;
			p[i].area = sqrt(t*(t - p[i].a)*(t - p[i].b)*(t - p[i].c));
		}

	sort(p, p + n, f);

		for (int i = 0; i < n; i++){
			cout << p[i].h << " " << p[i].a << " " << p[i].b << " " << p[i].c << endl;
		}

	return 0;
}
