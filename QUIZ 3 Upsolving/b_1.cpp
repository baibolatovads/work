#include <bits/stdc++.h>
using namespace std;

struct piramida{

	int h;
	int a;
	int b;
	int c;
	double area;
};

int main (){
int n, p;
cin >> n;
piramida p[n];

	for (int i = 0; i < n; i++){
		cin >> p[i].h >> p[i].a >> p[i].b >> p[i].c;
			t = (p[i].a + p[i].b + p[i].c)/2;
			p[i].area = sqrt(t*abs(t - p[i].a)*abs(t - p[i].b)*abs(t - p[i].c));
		} cout << endl;
	}

	for (int i = 0; i < n; i++){
		if (p[i].area <)
	}

}