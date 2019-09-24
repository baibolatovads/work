#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <sstream>

using namespace std;

int main(){

	//freopen("input.txt","r",stdin);

	string a;
	int b;

	int x = 0;
	int y = 0;

	while(cin >> a >> b){
		if(a == "North"){
			y = y + b;
		}else if(a == "East"){
			x = x + b;
		}else if(a == "South"){
			y = y - b;
		}else if(a == "West"){
			x = x - b;
		}
	}

	cout << x << " " << y << endl;

	return 0;
}