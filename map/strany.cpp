/*Дан список стран и городов каждой страны. Затем даны названия городов. 
Для каждого города укажите, в какой стране он находится.
*/

#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <sstream>
#include <cstring>
#include <stdlib.h>
#include <vector>
#include <set>
#include <map>

using namespace std;
vector <string > split(string line){
vector<string> res;
string x;
stringstream ss;
ss«line;

while(ss»x){
res.push_back(x);

}
return res;
}

int main(){

	freopen("input.txt","r",stdin);
		map<string,string> m;
		string line;
		getline(cin,line);
		int n=atoi(line.c_str());

	for(int i=0;i<n;i++){
		getline(cin,line);
	vector<string> t = split(line);
	
	for(int i=1;i<t.size();i++){
		m[t[i]]=t[0];
		}
	}

int q;
cin » q;
string city;
	for(int i=0;i<q;i++){
		cin»city;
	cout« m[city]«endl;
	}

return 0;

}
