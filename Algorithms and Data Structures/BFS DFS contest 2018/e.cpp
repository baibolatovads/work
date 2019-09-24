//adjacent-matrix representation of G

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int a[n][n];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = 0;
		}
	}

	for (int i = 0; i < n; i++)
	{
		int u;
		int degree;
		cin >> u;
		cin >> degree;
		for (int j = 0; j < degree; j++)
		{
			int v;
			cin >> v;
			a[u - 1][v - 1] = 1;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j) cout << " ";
			cout << a[i][j];
		}
		cout << endl;
	}
	return 0;
}