/* Напишите программу, которая сжимает массив ненулевых целых чисел 
следующим образом: первый элемент заменяется на сумму первого и последнего 
элементов исходного массива, второй – на сумму второго и предпоследнего и т.д. 
если в массиве нечётное число элементов, центральный элемент не меняется. Размер 
массива заранее неизвестен. Исходные данные записаны в файл input.txt , сжатый 
массив нужно вывести в файл output.txt .
*/

#include <bits/stdc++.h>
using namespace std;

int main (){


vector <int> v;
int n;
freopen ("input.txt", "r", stdin);
freopen ("output.txt", "w", stdout);

while (cin >> n){
	if (n == 0) break;
	v.push_back(n);
}

int pos = 0, pos1 = v.size() - 1;

while (pos < pos1){
	v[pos] = v[pos] + v[pos1];
	pos = pos + 1;
	pos1 = pos1 - 1;
}

for(int i = 0; i + i < v.size(); ++i){
	cout << v[i] << " ";
}

return 0;
}