/* Аня и Боря любят играть в разноцветные кубики, причем у каждого из них 
свой набор и в каждом наборе все кубики различны по цвету. Однажды дети 
заинтересовались, сколько существуют цветов таких, что кубики каждого цвета 
присутствуют в обоих наборах. Для этого они занумеровали все цвета случайными числами. 

Входные данные
В первой строке входного файла записаны числа N и M — количество кубиков у 
Ани и Бори соответственно. В следующих N строках заданы номера цветов кубиков Ани. 
В последних M строках номера цветов кубиков Бори.

Выходные данные
Выведите сначала количество, а затем отсортированные по возрастанию номера цветов 
таких, что кубики каждого цвета есть в обоих наборах, затем количество и 
отсортированные по возрастанию номера остальных цветов у Ани, потом количество и 
отсортированные по возрастанию номера остальных цветов у Бори.
*/

#include <bits/stdc++.h>
using namespace std;
int main(){

freopen ("input.txt", "r", stdin);
set <int> x, y, ans, ans2, ans3;
int a, b, c, d;
cin >> a >> b;


	for (int i = 0; i < a; i++){
		cin >> c;
		x.insert(c);
	}

	for (int i = 0; i < b; i++){
		cin >> d;
		y.insert(d);
	}

set <int> :: iterator it;

	for (it = x.begin(); it != x.end(); it++){
		int k = *it;
		if (y.find(k) != y.end())
			ans.insert(k);
	}

	for (it = y.begin(); it != y.end(); it++){
		int k = *it;
		if (x.find(k) != x.end())
			ans.insert(k);
	}cout << ans.size() << endl;

	for (it = ans.begin(); it != ans.end(); it++){
		cout << *it << " ";
	}cout << endl;

		for (it = x.begin(); it != x.end(); it++){
		int k = *it;
		if (y.find(k) == y.end())
			ans3.insert(k);
	}cout << ans3.size() << endl;

	for (it = ans3.begin(); it != ans3.end(); it++){
		cout << *it << " ";
	}cout << endl;

	for (it = y.begin(); it != y.end(); it++){
		int k = *it;
		if (x.find(k) == x.end())
			ans2.insert(k);
	}cout << ans2.size() << endl;

	for (it = ans2.begin(); it != ans2.end(); it++){
		cout << *it << " ";
	}cout << endl;

return 0;
}




