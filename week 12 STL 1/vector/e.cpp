/* Напишите программу, которая находит медиану массива , то есть число, 
которое располагается в середине массива после его сортировки. Размер 
массива заранее неизвестен. Исходные данные записаны в файл input.txt , 
результат нужно вывести в файл output.txt . Если в массиве чётное число 
элементов, нужно вывести два "центральных" элемента.
*/

#include <bits/stdc++.h>
using namespace std;


int main(){

vector <int> v;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
int n;
cin >> n;
int a;

	

	for (int i = 0; i < n; i++){
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());

			
				if (n%2 != 0) cout << v[n/2];
				if (n%2 == 0) cout << v[n/2 - 1] << " " << v[n/2];
			
		

	return 0;
}
	
