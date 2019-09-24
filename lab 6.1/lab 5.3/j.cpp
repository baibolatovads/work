#include <iostream>
using namespace std;
int main() {
 
int x, n=0, k=0, prev;
cin >> prev;
n = prev;
	while (cin >> x){
		if (x==0 && prev==0) break;
		prev = x;
		n = n+x;
	}
	cout << n << endl;

return 0;
}
