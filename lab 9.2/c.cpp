#include <bits/stdc++.h>

using namespace std;

void kolichestvo_cifr (string d){
	int t = 0;
	for(int i = 0; i< d.size(); i++){
		if(d[i] <= '9' && d[i] >= '0')
			t++;
	}cout << t;
}

int main (){
	string d;
	cin >> d;
	kolichestvo_cifr(d);
}