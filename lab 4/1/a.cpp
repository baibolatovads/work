#include <iostream> 
#include <cmath> 

using namespace std; 
int main() {

int a, b, i;

cin >> a >> b;

for (i = a; i<=b; i++){
	if(i%2 ==0) cout << i << " " ;
}

return 0;
}

