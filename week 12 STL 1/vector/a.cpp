/*Напишите программу, которая сортирует массив целых чисел в порядке 
возрастания (неубывания). Размер массива заранее неизвестен. Исходные 
данные записаны в файл input.txt , отсортированный массив нужно вывести 
в файл output.txt .
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

		for (int i = 0; i < n; i++){
			cout << v[i] << " ";
		}

return 0;	
}