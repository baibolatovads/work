#include <iostream>
#include <cmath>

using namespace std;

struct point{
	double x;
	double y;
};

double f(point a, point b){
	return sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
}

int main(){

	int n;
	cin >> n;
	point p[n];

	for(int i = 0; i < n; ++i){
		cin >> p[i].x >> p[i].y;
	}

	point p0;
	p0.x = 0;
	p0.y = 0;

	int index = 0;

	for(int i = 1; i < n; ++i){
		double l1 = f(p[i],p0);
		double l2 = f(p[index],p0);

		if(l1 > l2){
			index = i;
		}
	}

	cout << p[index].x << " " << p[index].y << endl;

	return 0;
}