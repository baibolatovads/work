#include <iostream>
using namespace std;
int main() {
 
double x, n=0, k = 0, s;


	while (cin >> x){
		if (x==0) break;
		n = n+x;
		k++;
		s = n/k;
	}
	
	cout << s << endl;

return 0;
}
