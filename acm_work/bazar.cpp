#include <bits/stdc++.h>

using namespace std;

int main(){
 
 int n, t;
 cin >> n >> t;
 int a[n];
 int cnt = 0;
 
 for(int i = 0; i < n; i++){
  cin >> a[i];
  
 }
 int sum = 0;
 int cnt2 = 0;
 
 
 
 
 do{
   for(int i = 0; i < n; i++) {
    	for(int j = 0; j < n; j++){
         if(t < a[j]){
         	cnt2++;
         	cout << "Continue cnt's: " << cnt2 << endl;
       		continue;
       		}
       	if(cnt2 == n){
        cout << cnt;
        return 0;
      	} 
  }
  		cnt2 = 0;
  		if(t < a[i]) continue;
   			sum += a[i];
    		t-=a[i];
  			cnt++;
  //out << sum << endl;
   			
  }
}
   while(t >= 0);
 
 
 cout << "Result : " << cnt;
return 0;
}