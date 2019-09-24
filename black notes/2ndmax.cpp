#include <bits/stdc++.h>
using namespace std;

int main(){

int a;
vector<int> v;

		while(cin >> a && a != 0){
			v.push_back(a);
		}
sort(v.begin(), v.end());

		for (int i = 0; i < v.size(); i++){
			cout << v[v.size() - 2] << " ";
			break;
		}

return 0;
}