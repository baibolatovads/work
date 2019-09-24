#include <bits/stdc++.h>
using namespace std;

int n, m;

bool used[110][110];

queue<pair<int, int> > q;

char c[110][110];

int ans = 0;

int DX[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int DY[8] = {-1, -1, -1, 0, 0, 1, 1, 1};

void bfs(int i, int j)
{
	q.push(make_pair(i, j));

	used[i][j] = true;

	while (!q.empty())
	{
		int y = q.front().first;
		int x = q.front().second;

		q.pop();

		for (int k = 0; k < 8; k++)
		{
			int YY = y + DY[k];
			int XX = x + DX[k];

			if ((YY >= 0) and (YY < n) and (XX >= 0) and (XX < m))
				if (!used[YY][XX] and c[YY][XX] == '@')
				{
					used[YY][XX] = true;
					q.push(make_pair(YY, XX));
				}
		}
	}

	ans++;
}


int main()
{
		while (true)
	{
		ans = 0;

		cin >> n >> m;

		if (n == 0) break;

		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				used[i][j] = false;

		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> c[i][j];

		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				if (c[i][j] == '@' && !used[i][j])
					bfs(i, j);

		cout << ans << endl;
	}

	return 0;
}