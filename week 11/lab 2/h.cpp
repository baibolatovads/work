#include <bits/stdc++.h>

using namespace std;

struct good_students{

	string surname;
	string name;
	int math;
	int phys;
	int programming;
};

int main(){
	int n;
	cin >> n;
	good_students s[n];

		for (int i = 0; i < n; i++){
			cin >> s[i].surname >> s[i].name >> s[i].math >> s[i].phys >> s[i].programming;
		}
		
		for (int i = 0; i < n; i++){
		if (s[i].math > 3 && s[i].phys > 3 && s[i].programming > 3) 
		cout << s[i].surname << " " << s[i].name << " "<< s[i].math << " "<< s[i].phys << " "<< s[i].programming << endl;
		
	}

return 0;
}

