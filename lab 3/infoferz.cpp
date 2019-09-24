#include <iostream>
#include <cmath>
using namespace std;

int main (){

int x1, y1, x2, y2;

cin >> x1 >> y1 >> x2 >> y2;

int dx = x1 - x2;
int dy = y1 - y2;
if (dx < 0) dx = -dx;
if (dy < 0) dy = -dy;

if ((x1==x2)||(y1==y2)||(dx==dy)){
	cout << "YES";
}else{
	cout << "NO";
}

return 0;
}