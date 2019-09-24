#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

struct Point {

	double x;
	double y;
};

int main (){
	int n;
	cin >> n;
	double k;
	Point p[n];

		for (int i = 0; i < n; i++){
			cin >> p[i].x >> p[i].y;
		}

		for (int i = 0; i < n; i++){
			k = (p[i].x + p[i].y)/2;
			cout << k << " ";
		}

	return 0;
}
