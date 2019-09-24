/*
Дано два списка чисел, числа в первом списке упорядочены по неубыванию. Для каждого числа из второго списка определите номер первого и последнего появления этого числа в первом списке.
В первой строке входных данных записано два числа N и M (1NM20000). Во второй строке записано N упорядоченных по неубыванию целых чисел — элементы первого списка. В третьей строке записаны M целых неотрицательных чисел - элементы второго списка. Все числа в списках - целые 32-битные знаковые.
Программа должна вывести M строчек. Для каждого числа из второго списка нужно вывести номер его первого и последнего вхождения в первый список. Нумерация начинается с единицы. Если число не входит в первый список, нужно вывести одно число 0.
*/
#include <iostream>
 
using namespace std;
 
int main()
{
    long n, k, m;
    cin >> n >> k;
    long *a = new long[n];
    long *b = new long[k];  
 
    for (long i = 0; i < n; i++)
        cin >> a[i];
 
    for (long i = 0; i < k; i++)
        cin >> b[i];
 
    for (long i = 0; i < k; i++)
    {
        int l = 0, r = n - 1;
        while (l < r)
        {
            m = (l + r) / 2;
            if (a[m] < b[i]) l = m + 1;
            else r = m;
        }
        if (a[r] == b[i])
        {
            cout << ++r << " ";
            while (a[r] == b[i])
                r++;
            cout << r << endl;
        }
        else cout << 0 << endl;
    }
 
    delete [] a;
    delete [] b;
    return 0;
}