/*Заданы N пирамид с помощью высоты и сторонами треугольника у основания, отсортируйте их
по убыванию относительно площади треугольника. Если площади равны, то по высоте по возраста-
нию.
3
3 4 5 1
30 40 50 2
300 400 500 1  

300 400 500 1
30 40 50 2
3 4 5 1*/

#include <iostream>
#include <cmath>

using namespace std;

struct pyramid{
	double a;
	double b;
	double c;
	double h;
	double s;
	void generateSqr(){
		double p = (a + b + c) / 2;
		s = sqrt(p*(p-a)*(p-b)*(p-c));		
	}
	void printInfo(){
		cout << a << " " << b << " " << c << " " << h << endl;
	}
};

bool f(pyramid a, pyramid b){
	if(a.s > b.s ) return true;
	if(a.s == b.s && a.h < b.h) return true;
	return false;
}

int main(){

	int n;
	cin >> n;
	pyramid p[n];

	for(int i = 0; i < n; ++i){
		cin >> p[i].a >> p[i].b >> p[i].c >> p[i].h;
		p[i].generateSqr();
	}

	sort(p,p + n, f);

	for(int i = 0; i < n; ++i){
		p[i].printInfo();
	}
	
	
	return 0;
}