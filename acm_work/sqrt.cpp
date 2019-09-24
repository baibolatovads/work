#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int x;
	cin >> x;

	for (int i = 0; i < x; i++){
		if (i * i == x){
			cout << i;
			break;
		} 
	}
	


	return 0;
}