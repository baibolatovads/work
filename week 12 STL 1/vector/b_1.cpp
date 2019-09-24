/* Напишите программу, которая сортирует массив ненулевых целых чисел 
в порядке возрастания (неубывания). Размер массива заранее неизвестен. 
Исходные данные записаны в файл input.txt , отсортированный массив нужно 
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
	

			sort(v.begin(), v.end());
		
		vector<int>::iterator it;

		for (it = v.begin(); it != v.end(); it++){
			//if (v[i] == 0) continue;
				cout << *it << " ";
		} 

return 0;	
}