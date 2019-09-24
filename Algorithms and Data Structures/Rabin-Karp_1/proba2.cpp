#include <iostream>
#include <vector>
using namespace std;

int main(){

//KMP 2nd stage: given 2 strings, find the max size of string when it appears
	vector<int> v;
	string g, f;
	cin >> g >> f;
	int k = 0, l = 0, cnt = 0;
	int g_s = g.size(), f_s = f.size();
	bool found = true;

	while(k != g_s){
		if(g[k] == f[l]){
			k++;
			l++;
			if(l == f_s){
				cnt++;
				v.push_back(l);
			}
		}
		else if(l == 0) {
			k++;
			if(k == f_s){
				found = false;
			}
		}
		else l = f[l - 1];
	} 

	if(found == false) cout << "There is no such word";
	else{
		cout << cnt << endl;
		for(int i = 0; i < v.size(); i++){
			cout << v[i] << " ";
		}	
	} 



	return 0;
}