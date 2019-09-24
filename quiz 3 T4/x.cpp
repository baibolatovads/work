#include <iostream>

using namespace std;


int main(){
	string s,best;
	int d = 0;
	while(cin >> s){
		if(best.size() < s.size()){
			best = s;
		}
	}

	for (int i = 0; i < best.size(); i++){
		if (best[i] <= '9' && best[i] >= '0')
			d++;
	}cout << d;
 return 0;
}
