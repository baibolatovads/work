#include <iostream> 
#include <cmath> 

using namespace std; 
int main() {

int a, b, c, d, i;

cin >> a >> b >> c >> d;

for (i = a; i<=b; i++){
	if (i%d == c) cout << i << " ";
	if (i%d !=c) cout << " ";
	
}

return 0;
}