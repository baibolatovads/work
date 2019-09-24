#include <iostream>
#include <cmath>
using namespace std;
int main() {
 
double a=0, b=0, n=0, x;
	while(cin>>x && x!=0)
	{
		a=a+(x*x);
		b=b+x;
		n++;
	}
	b=b*b;
	printf("%.10f", sqrt((a*n-b)/(n*(n-1))));
	cout << f << endl;

return 0;
}
