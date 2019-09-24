#include <iostream>
#include <cmath>
using namespace std;

int minimum (int a, int b, int c, int d){
	return min(min (a, b), min (c, d));
} 

int main() {
	int x, y, z, u;
	cin >> x >> y >> z >> u;
	cout << minimum(x, y, z, u);


return 0;
}