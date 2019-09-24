//для данного х найти х^3
#include <iostream>
#include <math.h>

using namespace std;

int main(){

int x;
int r = x;
int l = 1;

while(fabs(l - r) > eps){
	m = (l + r)/2;
	if (m * m * m < x) l = m;
			else r = m;
}

	return 0;
}