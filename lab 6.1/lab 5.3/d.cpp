#include <iostream>
using namespace std;
int main() {
 
int x, n=0;

	while (cin >> x){
		if (x==0) break;
		if (x%2==0)
		n++;
	}
	cout << n << endl;

return 0;
}
