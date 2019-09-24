/*ксерокопии
нужно сделать N копий за мин время
*/

#include <iostream>
using namespace std;

int main(){
	
	int x, y, n, i, j, l , r, now;
	double speed;
	cin >> n >> i >> j;
	x = i < j ? i : j; //min
	y = i > j ? i : j; //max

	l = 0;
	r = (n - 1) * y;
	while(l != r){
		now = (l + r)/2;
		j = now/x + now/y;
		if (j < n - 1) l = now + 1;
		else r = now;
	}

	cout << r + x;

return 0;
}

