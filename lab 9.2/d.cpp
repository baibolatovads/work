#include <bits/stdc++.h>

using namespace std;

void zvezdochka(string g){
	string d;
	for(int i = 0; i < g.size(); i+2){
		d = g.insert(g[i], "*");
		cout << d;
	}
}

int main(){
	string g;
	cin >> g;
	zvezdochka(g);
	return 0;
}