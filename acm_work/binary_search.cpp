#include <iostream>
#include <cmath>
using namespace std;

int main(){

	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i++){
		cin >> a[i];
	}

	int find;
	cin >> find;

	int first = 0;
	int last = n - 1;
	int middle = (first + last) / 2;

	while(first < last){
		if (a[middle] < find){
			first = middle + 1;
		}
		else if (a[middle] == find){
			cout << find << " found at location " << middle + 1	<< "\n";
			break;
		}
		else {
			last = middle - 1;
		}

		middle = (first + last)/2;
	}
	if (first > last){
		cout << "Not found!";
	}

return 0;
}