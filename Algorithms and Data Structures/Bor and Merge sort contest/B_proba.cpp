#include <iostream>
#include <vector>
using namespace std;

int a[100100];
int cnt = 0;

void merge(int * a, int left, int right, int mid){
	int it1 = 0, it2 = 0;
	int result[right - left];
	while(left + it1 < mid && mid + it2 < right){
		if(a[left + it1] < a[mid + it2]){
			result[it1 + it2] = a[left + it1];
			it1 += 1;
		}
		else{
			result[it1 + it2] = a[mid + it2];
			it2 += 1;
			cnt++;
		}
	}
	while(left + it1 < mid){
		result[it1 + it2] = a[left + it1];
		it1 += 1;
		cnt++;
	}

	while(mid + it2 < right){
		result[it1 + it2] = a[mid + it2];
		it2 += 1;
		cnt++;
	} 

	for(int i = 0; i < it1 + it2; i++){
		a[left + i] = result[i];
	}
}

void mergeSort(int *a, int left, int right){
	if(left + 1 >= right) return;
	int mid = (left + right)/2;
	mergeSort(a, left, mid);
	mergeSort(a, mid, right);

	merge(a, left, right, mid);
}
int main(){
	
	//freopen("input.txt", "r", stdin);
	vector<int> v;
	int c;

  while(cin >> c){
    v.push_back(c);
  }

int n = v.size();
int b[n];

  for(int i = 0; i < n; i++){
      a[i] = v[i];
  }

mergeSort(a, 0, n);

	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << cnt;

	return 0;
}