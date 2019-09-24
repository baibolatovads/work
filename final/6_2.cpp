#include <iostream>
#include <algorithm>
using namespace std;
int main()
{

	//freopen ("input.txt", "r", stdin);
 int i, j, n,m[100][100],sum[1000]={0},temp1,temp2,temp3;
 cin>>n;
 		for(i = 0; i < n; i++)
			for( j=0 ; j<3;j++){
			 cin>>m[i][j];
			if(j==2) 
			sum[i]=sum[i]+m[i][j]; 
		else {
			sum[i]=(sum[i]+m[i][j])*60;
		}
}

sort(sum,sum+n);

for(i=0;i<n;i++) {

 			temp1=sum[i]%60; 
 			sum[i]=sum[i]/60;
 			temp2=sum[i]%60; 
 			temp3=sum[i]/60;

 cout<<temp3<<" "<<temp2<<" "<<temp1<<endl;
}
 return 0;
} 
