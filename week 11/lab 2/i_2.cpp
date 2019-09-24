#include <bits/stdc++.h>

using namespace std;

struct score {

	string surname;
	string name;
	int math;
	int phys;
	int prog;
};

double student (score a){
	double b = (a.math + a.phys + a.prog)/3;
	return b;
}

int main (){

int k;
cin >> k;
score v[k];

	for (int i = 0; i < k; i++){
		cin >> v[i].surname >> v[i].name >> v[i].math >> v[i].phys >> v[i].prog;
	}
	

		for (int i = 0; i < k; i++){
		if (l[0]  < student (v[i]))
			l[0] = v[i];
		 
}
	
	for (int i = 0; i < k; i++){
			cout << v[i].surname << " " << v[i].name << endl;
	}

return 0;
}
