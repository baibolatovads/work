Дан массив, состоящий из целых чисел. Напишите программу, которая подсчитывает количество положительных чисел среди элементов массива.

Входные данные
Сначала задано число N — количество элементов в массиве (1N10000). Далее через пробел записаны N чисел — элементы массива. Массив состоит из целых чисел.

Выходные данные
Необходимо единственное число - количество положительных элементов в массиве.
#include <bits/stdc++.h>
using namespace std;
int main() {
 
int n, k=0;
cin >> n;
int a[n];
 
for (int i=0; i < n; i++){
    cin >>  a[i] ;
    if (a[i]>=0)
     k++;
    	
}cout << k << " ";



return 0;
	}