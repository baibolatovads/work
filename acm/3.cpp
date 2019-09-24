#include <bits/stdc++.h>
using namespace std;

bool f(int x){
	bool res = false;
	if (x == 1) res = true;
	//x % i == 0
	for (int i = 2; i <= sqrt(x); i++){
		if (x % i == 0) res = true;
	}return res;
}
int d(int n){
	bool res = false;
	if (n == 1) res = true;
	int k = sqrt(n);
	if(n % k == 0) res = true;
	return res;
}

int main(){

int n;
cin >> n;
vector<int> v;
vector<int> v1;
vector<int> v2;


	for (int i = 1; i <= n; i++){
		if (n % i == 0) {
			v.push_back(i);
		}
	}
int b = v.size();
	for(int i = 1; i <= b - 1; i++){
		if(d(v[i])){
			v1.push_back(v[i]);
		}
		else v2.push_back(v[i]);
	}

	/*for (int i = 0; i < v1.size(); i++){
		cout << v1[i] << " ";
	}cout << endl;
	for (int i = 0; i < v2.size(); i++){
		cout << v2[i] << " ";
	}cout << endl;

*/

/*for(int i = 0; i < v2.size(); i++){
	for(int j = 0; j < v1.size(); j++){
		
	if(v2[i] % d(v1[j]) != 0){
		v1.push_back(v2[i]);
	}
}
}*/
for (int i = 0; i < v1.size(); i++){
		cout << v1[i] << " ";
	}cout << endl;
/*for (int j = 0; j < v.size(); j++){
	for (int i = 1; i <= v[j]; i++){
		
		if (v[j] % i == 0) {
			if(!f(i)){
					v1.push_back(v[j]);
				}
				int k = f(i);
					if (v[j] % k == 0) {
						v1.erase(v[j]);
			}
		}
	}
}
*/
sort(v1.begin(), v1.end());
	//int b = v1.size();

	/*for (int i = 1; i <= b - 1; i++){
		cout << v1[b - 2] << " ";
		//break;
	}
	//cout << endl << f(4);
*/
return 0;
}