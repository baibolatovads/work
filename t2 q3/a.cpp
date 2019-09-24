/*Напишите программу, которая выбирает из списка футболистов, год рождения 
которых находится в диапазоне от K до M , и которые забили за сезон ровно B мячей.
*/

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

struct footbal{
	string name;
	string surname;
	int year;
	int goals;
};

int main (){
	bool ok = true;
	int k, m, b, d=0;
	cin >> k >> m >> b;
	int n;
	cin >> n;
	footbal l[n];

		for (int i = 0; i < n; i++){
			cin >> l[i].name >> l[i].surname >> l[i].year >> l[i].goals;
		}

		for (int i = 0; i < n; i++){
			if (l[i].year>=k && l[i].year <= m && l[i].goals == b){ 
				d++;
			
		cout << l[i].name << " " << l[i].surname << endl;
	}}cout << d;
	return 0;

}
