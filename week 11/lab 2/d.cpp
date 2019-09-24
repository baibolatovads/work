#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

struct Point {

	double x;
	double y;
};

double f(Point a, Point b){
	return sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
}

int main (){
	double t;
	int n;
	cin >> n;
	double k;
	Point p[n];

		for (int i = 0; i < n; i++){
			cin >> p[i].x >> p[i].y;
		}

		cout << f(a, b);

	return 0;
}