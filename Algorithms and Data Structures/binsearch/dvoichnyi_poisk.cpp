/*
Реализуйте алгоритм бинарного поиска.
В первой строке входных данных содержатся натуральные числа N и K (0NK100000). Во второй строке задаются N элементов первого массива, отсортированного по возрастанию, а в третьей строке – K элементов второго массива. Элементы обоих массивов - целые числа, каждое из которых по модулю не превосходит 109

Выходные данные
Требуется для каждого из K чисел вывести в отдельную строку "YES", если это число встречается в первом массиве, и "NO" в противном случае.
*/
#include <iostream>
 
using namespace std;
bool f(int *a ,int k, int x)
{
    int l = 0;
    int r = k-1;
 
    while(l <= r){
        int m = (l + r)/2;
        if(a[m] < x){
            l = m + 1;
        }
        else if(a[m] > x){
            r = m - 1;
        }
        else {
            return true;
        }
    }
    return false;
}
 
int main(){
    int n, k, x;
    cin>>n>>k;
    int a[100100];
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i = 0;i<k;i++)
    {
        cin>>x;
        if(f(a,n,x))
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
 
    return 0;
}