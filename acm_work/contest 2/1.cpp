#include <iostream>
#include <vector>
using namespace std;
int n;
int used[100100];
vector<int> ans;
void rec(int pos){
if (pos == n + 1){
	for(int i = 0; i < ans.size(); i++){
		cout << ans[i] << " ";
	}
	cout << "\n";
	return;
}
	for(int i = 1; i <= n; i++){
		if(used[i] == 0){
			used[i] = 1;
			ans.push_back(i);
			rec(pos + 1);
			used[i] = 0;
			ans.pop_back();
		}
	}
}


int main(){

	
	cin >> n;

		rec(1);
	
	return 0;
}