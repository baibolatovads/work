/* Напишите программу, которая выполняет реверс массива целых чисел, 
то есть переставляет все элементы в обратном порядке. Размер массива 
заранее неизвестен. Исходные данные записаны в файл input.txt , обработанный 
массив нужно вывести в файл output.txt .
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

	reverse (v.begin(), v.end());

		for (int i = 0; i < n; i++){
			cout << v[i] << " ";
		}

	return 0;
}