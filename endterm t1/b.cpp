#include <bits/stdc++.h>
using namespace std;

bool f(int x){
	bool res = true;
	if (x == 1) res = false;
	for (int i = 2; i < sqrt(x); i++){
		if(x % i == 0){
			res = false;
			break;
		} 

	}return res;
}

int main(){

	int a, b;
	cin >> a >> b;
	set <int> ans;

		for (int i = b; i >= a; i--){
			if(f(i)) cout << i << " ";
			//ans.insert(i);
		}

		/*for (int i = ans.size(); i > 0; i--){
			cout << ans[i] << " ";
		}

/*set <int> :: iterator it;
как в сете вывести в порядке убывания?
	for (it = ans.rbegin(); it != ans.rend(); it--){
		cout << *it << " ";
	}*/
	return 0;
}