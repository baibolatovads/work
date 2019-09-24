#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> nums) {
 	for(int i = 1; i <= nums.size(); i++){
 		if(nums[i] == nums[i - 1]) nums.erase(i);
 	}  

 	int l = nums.size();
 	return l;     
} 

int main(){

	vector<int> nums1;
	int n, a;

	cin >> n;
		for(int i = 0; i < n; i++){
			cin >> a;
			nums1.push_back(a);
		}

	int len = removeDuplicates(nums1);

	for(int i = 0; i < nums1.size(); i++){
		cout << nums1[i] << " ";
	}
	return 0;
}