#include <iostream>
    using namespace std;
    int main() {
     
            int n, x, y;
            n%2!=0; 
            cin >> n;
            int a[n][n];
            
            	x = 0;
            	y = 1;
            	int s = n;
            	int dir = 1;
            	int k = 0;

while (s>=2){
	int i = 0;
}
            
while (int i!=s){
	x = x + dir;
	a[y,x] = 1;
	i = i + 1;
}

k = k+1;
if(k<2){
	s = s-1;
}else s = s-2;
int i = 0;

while (int i!=s){
	y = y + dir;
}

return 0;
}
