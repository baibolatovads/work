/*Проверьте, является ли двумерный массив симметричным относительно главной диагонали.
 Главная диагональ — та, которая идёт из левого верхнего угла двумерного массива в правый
  нижний.*/
#include <iostream> 
#include <cmath> 

using namespace std; 
int main() {
int x=0;
int n;
cin >> n;
int a[n][n];

	for (int i = 0; i<n; ++i){
		for (int j = 0; j < n; ++j){
			cin >> a[i][j];
}
}
			for (int i = 0; i<n; ++i){
				for (int j = 0; j < n; ++j){
					if (a[i][j]!=a[j][i]){
					x=1;}
			}	
		}
		if(x==0)cout<<"yes";
		else cout<<"no";
		return 0;
	}