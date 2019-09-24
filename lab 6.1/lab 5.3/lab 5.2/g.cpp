#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	 double x,y,p;
  	cin >> x >> p >> y;
int k = 0;
while (x<y){
	x = x+(x/100*p);
	x = x * 100;
	x = (int) x;
	x = x/100;
	k++;
} cout << k;

return 0;
}