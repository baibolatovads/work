#include <iostream>
using namespace std;
int main() {
 
int x, n=0, k=0;


	while (cin >> x){
		if (x==0) break;
		n = max(n,x);
	}
	cout << n << endl;

return 0;
}
