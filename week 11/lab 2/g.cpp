#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

struct student{
	string name;
	string surname;
	double math;
	double hum;
	double phys;
};

int main (){
	int n;
	cin >> n;
	student s[n];
	double av_math, av_hum, av_phys; 
	double k=0, d = 0, f = 0;
		for (int i = 0; i < n; i++){
			cin >> s[i].name >> s[i].surname >> s[i].math >> s[i].hum >> s[i].phys;
		}

		for (int i = 0; i < n; i++){
			
			k = k + s[i].math;
			d = d + s[i].phys;
			f = f + s[i].hum;
			 av_math = k/n;
			 av_hum  = f/n;
			 av_phys = (d)/n;
		}cout << av_math << " " << av_hum << " " << av_phys << endl;
		
return 0;
}

