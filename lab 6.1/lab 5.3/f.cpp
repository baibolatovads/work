#include <iostream>
using namespace std;
int main() {
 
int x, prev, n=0;
cin >> prev;
	while (cin >> x){
		if (x==0) break;
		if (x > prev)
		n++;
		//prev = x;
	}
	cout << n << endl;

return 0;
}
