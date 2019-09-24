#include <bits/stdc++.h>

using namespace std;

int main (){
	string s, d, r;
	cin >> s;
	int k = s.size();

		for (int i = 1; i <= s.size(); i++){
			if (k%2 == 0) d = s.erase(k/2);
			else if (k%2 != 0) d = s.erase (k/2+1);
		}cout << d << endl;

		for (int i = s.size(); i > 0; --i){
			if (k%2 == 0) r = s.erase(k/2);
			else if (k%2 != 0) r = s.erase (k/2-1);
		}cout << r << endl;;

		string t = d;
		d = r;
		r = t;

		cout << d+r;
		return 0;
}