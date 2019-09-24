#include <bits/stdc++.h>
using namespace std;

void kolichestvo_cifr_ot_1_do_9 (int * a){
	int a = 0, b = 0, c = 0 , d = 0, e = 0, f = 0, g = 0, h = 0, i = 0;
	for (int i = 0; i < 9; i++){
		if (a[i] == 1) a++;
		if (a[i] == 2) b++;
		if (a[i] == 3) c++;
		if (a[i] == 4) d++;
		if (a[i] == 5) e++;
		if (a[i] == 6) f++;
		if (a[i] == 7) g++;
		if (a[i] == 8) h++;
		if (a[i] == 9) i++;
}cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g << " " << h << " " << i;
}
int main (){
	int a[9];
	for (int i = 0; i < 9; i++){
		cin << a[i];
	}

	kolichestvo_cifr_ot_1_do_9(a);
	return 0;
}