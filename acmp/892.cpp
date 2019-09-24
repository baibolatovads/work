#include <bits/stdc++.h>
using namespace std;
int main(){

	int n;
	cin >> n;
	if(n <= 12){
		if(n == 12 || n == 1 || n == 2) cout << "Winter";
		else if(n >=3 && n <= 5) cout << "Spring";
		else if(n >= 6 && n <= 8) cout << "Summer";
		else if(n >= 9 && n <= 11) cout << "Autumn";
	}
	else cout << "Error";

return 0;
}