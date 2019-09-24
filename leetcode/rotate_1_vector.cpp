#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) {
	vector<int> v1;
	vector<int> v2;
	int n = nums.size();

	
	for(int i = n - k; i < n; i++){
		cout << nums[i] << " ";
	}

	for(int i = 0; i < n - k; i++){
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
}