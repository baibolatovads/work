#include <iostream>
using namespace std;
int cnt=0;
	 
void Merge(int a[], int left, int right, int mid){
	int i, j, k, result[right-left+1];
	i = left;
	k = 0;
	j = mid + 1;
	while (i <= mid && j <= right){
		if (a[i] < a[j])
			result[k++] = a[i++];
		else
			result[k++] = a[j++];
			cnt++;
		}

	while (i <= mid){
			result[k++] = a[i++];
			cnt++;
		}
	 
	while (j <= right){
			result[k++] = a[j++];
			cnt++;
		}
	 
	for (i = left; i <= right; i++)
		a[i] = result[i-left];
		
	}

void MergeSort(int a[], int left, int right){
	int mid;
	if (left < right)
	{
		mid=(left+right)/2;		
		MergeSort(a, left, mid);
		MergeSort(a, mid+1, right);
	 
		Merge(a, left, right, mid);
	}
}
	 
int main(){
	int n, i;
	cin>>n;
	int a[500100];
	for (int i=0;i<n;++i)
		cin>>a[i];

		MergeSort(a, 0, n-1);
		
		for (int j=0;j<n;++j){
		
			if (j!=n-1)
				cout<<a[j]<<' ';
			else
				cout<<a[j];
	}
		cout<<endl;
		cout<<cnt<<endl;
	 }	