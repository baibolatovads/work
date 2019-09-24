#include <bits/stdc++.h>

using namespace std;

struct best_score{

	string surname;
	string name;
	int a;
	int b;
	int c;
};
	
	void l (best_score m, best_score n){
		double z = (m.a + m.b + m.c)/3;
		double e = (n.a + n.b + n.c)/3;
		if (z < e) {
			z = e;
		}cout << m.surname << " " << m.name;
	}

int main (){
	int n;
	cin >> n;
	best_score d[n];
	double j, k;
	best_score b = d[0];

		for (int i = 0; i < n; i++){
			cin >> d[i].surname >> d[i].name >> d[i].a >> d[i].b >> d[i].c;
		} 

		for (int i = 0; i < n; i++){
			l(b, d[i]);
 		}

 	return 0;
}
