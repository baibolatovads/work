#include <bits/stdc++.h>

using namespace std;

void binsearch
int main(){

int n, m;
cin >> n >> m;
int a[n], b[m];
int index = 0;

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	for(int i = 0; i < m; i++){
		cin >> b[i];
	}

bool flag = false;
  int l = 0; // левая граница
  int r = a[n]; // правая граница
  int mid;
 
  while ((l <= r) && (flag != true)) {
    mid = (l + r) / 2; // считываем срединный индекс отрезка [l,r]
 
    if (a[mid] == key) flag = true; //проверяем ключ со серединным элементом
    if (a[mid] > key) r = mid - 1; // проверяем, какую часть нужно отбросить
    else l = mid + 1;
  }





	return 0;
}