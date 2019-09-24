#include <iostream>
#include <cmath>

using namespace std;

struct point{
	double x;
	double y;
};

/*double f(point a){
	return (a.x+a.y)/2;
}

double g(point b){
	return (b.x+b.y)/2;
}*/

	double point(point a, point b){
		point r;
		r.x = (a.x+a.y)/2;
		r.y = (b.x+b.y)/2;
		return r;
	}

int main(){

	int n;
	cin >> n;
	point p[n];
	point j[n];

	for(int i = 0; i < n; ++i){
		cin >> p[i].x >> p[i].y;
		cin >> j[i].x >> j[i].y;
	}


cout << point(p,j) << endl;

return 0;
}
