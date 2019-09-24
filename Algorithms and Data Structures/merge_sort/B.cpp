#include <iostream>
using namespace std;

int a[100100];
/*void merge(int *a, int left_l, int left_r, int right_l, int right_r){
	int l = left_l, r = right_r;
	int temp[right_r - left_l + 1];
	int cnt = right_r - left_l + 1;
	int tmp[cnt];
	for(int i = 0; i < cnt; i++){
		if(l > left_r){
		tmp[i] = a[r++];
		}
		else if(r > right_r){
		tmp[i] = a[l++];
		}

		else if(a[l] < a[r]){
			tmp[i] = a[l++];
		}
		else if(a[l] > a[r]){
			tmp[i] = a[r++];
		}
	} 
	for(int i = 0; i < cnt; i++){
	a[left_l + i] = tmp[i];
	}
}*/

	void merge(int *a; left, mid, right : int):
    it1 = 0
    it2 = 0
    result : int[right - left]
  
    while left + it1 < mid and mid + it2 < right
        if a[left + it1] < a[mid + it2]
            result[it1 + it2] = a[left + it1]
            it1 += 1
        else
            result[it1 + it2] = a[mid + it2]
            it2 += 1
  
    while left + it1 < mid
        result[it1 + it2] = a[left + it1]
        it1 += 1
  
    while mid + it2 < right
        result[it1 + it2] = a[mid + it2]
        it2 += 1
  
    for i = 0 to it1 + it2
        a[left + i] = result[i]

void merge_sort(int *a, int l, int r){
	if (l == r) return;
	int m = (l + r)/2;
	merge_sort(a, l, m);
	merge_sort(a, m + 1, r);

	merge(a, l, m, m + 1, r);
}

int main(){
	
	//freopen("input.txt", "r", stdin);
	int n;
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int l = 0, r = n - 1;
	merge_sort(a, l, r);

	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	return 0;
}