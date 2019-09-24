/* Напишите программу, которая выполняет реверс (перестановку элементов в обратном 
порядке) каждой половины массива ненулевых целых чисел. Размер массива заранее 
неизвестен. Исходные данные записаны в файл input.txt , обработанный массив нужно 
вывести в файл output.txt .
*/

#include <bits/stdc++.h>
using namespace std;


int main(){

vector <int> v;
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
int a;


		while(cin >> a){
			if (a == 0) break;
			v.push_back(a);
		}

	for (int i = v.size()/2 - 1; i >= 0; i--){
		cout << v[i] << " ";
	}

	for (int i = v.size() - 1; i >= v.size()/2; i--){
		cout << v[i] << " ";
	}

	return 0;
}