#include <bits/stdc++.h>
using namespace std;

struct student{
	string surname;
	double gpa;
};

bool f(student a, student b){
	if(a.gpa > b.gpa) return true;
	return false;
}

int main(){

	freopen("input.txt","r",stdin);

	int n;
	cin >> n;
	student s[n];
	//student * s = new student[n];

	for(int i = 0; i < n; ++i){
		cin >> s[i].surname >> s[i].gpa;
	}

	sort(s,s + n,f);

	for(int i = 0; i < n; ++i){
		cout << s[i].surname << " " << s[i].gpa << endl;
	}

	return 0;
}