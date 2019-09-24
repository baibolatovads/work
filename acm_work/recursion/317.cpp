//dead moroz
#include <fstream>
#include <iostream>
 
using namespace std;

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int X,Y,Z,W,sum=0;
    cin>>X>>Y>>Z>>W;
 
int temp_X,temp_Y,temp_Z;
    for (int i=0;i<=W/X;i++){
        for (int j=0;j<=(W-(temp_X=X*i))/Y;j++){
            temp_Y=Y*j;
            temp_Z=W-(temp_X+temp_Y);
            if(temp_Z%Z==0){sum++;}
            }
        }
 
cout<<sum;
 
 
    return 0;
}