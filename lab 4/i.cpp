#include <iostream> 
#include <cmath> 

using namespace std; 
int main() {

int x, i;

cin >> x;
	int k =0;
for (i = 1; i <= x; i++) {
	if(x % i==0)
		k = k+1;
} cout << k << endl; 

return 0;
}