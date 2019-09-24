#include <bits/stdc++.h>

using namespace std;

struct score {

	string surname;
	string name;
	int math;
	int phys;
	int prog;
};

int main (){
double b;
int n;
cin >> n;
score a[n];

	for (int i = 0; i < n; i++){
		cin >> a[i].surname >> a[i].name >> a[i].math >> a[i].phys >> a[i].prog;
	}
	for (int i=0; i<n; ++i)
	int l[0]=0;
		for (int i = 0; i < n; i++){
		if (l[0] < ((a[i].math+a[i].phys+a[i].prog)/3))
			l[0] =((a[i].math+a[i].phys+a[i].prog)/3);
		 
}

	for (int i = 0; i < n; i++){
			cout << a[i].surname << " " << a[i].name << endl;
	}

return 0;
}
