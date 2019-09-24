#include <bits/stdc++.h>
using namespace std;

bool checkPossibility(vector<int>& nums) {
	int k = 0;
 	for(int i = 0; i < nums.size(); i++){
 		if(nums[i] <= nums[i + 1]) k++;
 	}       
 	if(k <= nums.size() - 1) return false;
 	else return true;
}

int main(){

	int n;
	cin >> n;
	int a;
	vector<int> nums;

		for(int i = 0; i < n; i++){
			cin >> a;
			nums.push_back(a);
		}

		cout << checkPossibility(nums);
	return 0;
}