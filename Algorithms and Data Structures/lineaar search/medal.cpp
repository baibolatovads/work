/*Спортсмен Василий участвовал в соревнованиях по хоккейболу и получил в личном зачете серебряную медаль. Известно, что участники, получившие одинаковое количество очков, награждаются одинаковыми наградами. Известно, что были разыграны золотые серебряные и бронзовые медали. В задаче не спрашиваются правила хоккейбола. Необходимо только определить сколько очков набрал Василий.
На первой строке дано число N (2 ≤ N ≤ 1000) количество спортсменов, участвовавших в соревнованиях, на второй N целых чисел – результаты через пробел.
Требуется вывести одно число – результат Василия*/

#include <iostream>
 
using namespace std;
 
int main()
{
    int n, a[1010], mx1=-10000, mx2=-10000;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
 
    for(int i=1; i<=n; i++){
        if(a[i] >= mx1){
            if(mx1 != a[i]) {
                mx2 = mx1;
                mx1 = a[i];
            }
        }
        else if(a[i] > mx2){
            mx2 = a[i];
        }
    }
 
    cout<<mx2;
    return 0;
}
