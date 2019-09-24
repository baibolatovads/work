#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;
int main(){

string line,q="";
stringstream s;
int n;
cin>>line;
for(int i=0;i<line.size();i++)
{
	if(line[i]>=48&&line[i]<=57)
	{
		q+=line[i];
	}
}
s<<q;
s>>n;
cout<<sqrt(n);
return 0;
}