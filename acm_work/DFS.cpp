#include <iostream>

using namespace std;

vector<vector> edges;
void DFS(int v) {     
if (mark[v] > 0) // если вершина уже посещена, делать тут больше нечего     
{        
return;     
}     
// Совершаем какие-нибудь полезные действия, например, можно вывести номер вершины на экран     
mark[v] = 1; // начали обработку     
for (int i = 0; i < (int)edges[v].size(); ++i) // запускаемся от всех соседей     
{         
DFS(edges[v][i]);     
}     
mark[v] = 2; // завершили обработку 
}

int main(){

vector <vector> v;
int a;
	
	for(int i = 0; i < 5; i++){
		cin >> a;
		v.push_back(a);
	}

vector <vector> :: iterator it;

	for(it = v.begin(); it != v.end(); it++){
		DFS(*it);
	}



	return 0;
}