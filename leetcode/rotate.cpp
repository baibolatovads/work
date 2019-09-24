#include <bits/stdc++.h>
using namespace std;

void rotateByOne(vector<int>& nums){
	int n = nums.size();
	int temp = nums[n - 1];
	for(int i = n - 1; i >= 1; i--){
		nums[i] = nums[i - 1];
	}

	nums[0] = temp;
}

void rotate(vector<int>& nums, int k) {
	for(int j = 1; j <= k; j++){
		rotateByOne(nums);
	}
	for(int i = 0; i < nums.size(); i++){
		cout << nums[i] << " ";
	}
}

int main(){

	int n;
	cin >> n;
	int a[n];

	vector<int> nums;

		for(int i = 0; i < n; i++){
			cin >> a[i];
			nums.push_back(a[i]);
		}
	int k;
	cin >> k;

	rotate(nums, k);

return 0;
}