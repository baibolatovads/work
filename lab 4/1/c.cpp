#include <iostream> 
#include <cmath> 

using namespace std; 
int main() {

int a, b, i;

cin >> a >> b;

for (int i = sqrt (a); i<= sqrt (b); i++){
	if ((i*i >= a) && (i*i <=b)) 



		cout << i*i << endl ;
}

return 0;
}