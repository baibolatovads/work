#include <bits/stdc++.h>
using namespace std;

int main(){
		
	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);	
	int a, b, c;
	cin >> a >> b >> c;

	if(a == 0 && b == 0 && c == 0) cout << 0;

	else{

	if(a == 0) cout << "";
	else cout << a;

	if(b == 1 && a != 0) cout << "+x";
	else if(b == 1 && a == 0) cout << "x";
	else if (b == -1) cout << "-x";
	else if (b == 0) cout << "";
	else if (b > 0){
		if(a != 0) cout << "+";
			cout << b << "x";
	} 
	else if (b < 0) {
		cout << b << "x";	
	}

	if (c == 1) cout << "y";
	else if (c == -1) cout << "-y";
	else if (c == 0) cout << "";
	else if (c > 0 && c != 1){
		if(a == 0 && b == 0) cout << c << "y";
		else cout << "+" <<	c << "y";
	}  
	else if (c < 0 && c != -1){
		if(a == 0 && b == 0) cout << c << "y";
		else cout << c << "y";
	} 
}
	return 0;
}