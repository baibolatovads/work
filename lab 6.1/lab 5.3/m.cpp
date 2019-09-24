#include <iostream>
using namespace std;
int main() {
 
int x, prev, next, c = 0;
cin >> prev >> x;

	while (cin >> next){
		if (next==0) break;
		if (x>prev && x>next) c++;
			prev = x ;
			x = next;
	}
	cout << c << endl;

return 0;
}
