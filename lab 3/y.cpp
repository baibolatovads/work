#include <iostream> 
#include <cmath> 
#include <bitset>
using namespace std; 
int main() {

const int c1=15, c10 = 125, c60 = 440;

int n, k1, k10, k60;

cin >> n;

k60 = n/60;
n%= 60;

k10 = n/10;

k1 = n%10;

if (k1 * c60 > c10){
	k1 = 0;
	k10++;
}
if (k1 * c1 + k10 * c10 > c60){
	k1 = 0;
	k10 = 0;
	k60++;
}

cout << k1 << " " << k10 <<" "<<k60;

return 0;
}