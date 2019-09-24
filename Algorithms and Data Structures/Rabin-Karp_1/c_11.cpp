#include <iostream>
#include <vector>
#include <map>
using namespace std;
string pattern, text;		
vector<string> patterns(150);
map<string,int> m;	
int sz = 0;
vector<int> prefixFunction(string s)
{
	int n = (int)s.size();
	vector<int> p(n);
	p[0] = 0;
	for(int i = 1; i < n; i++)
	{
		int j = p[i-1];
		while(j > 0 && s[i] != s[j])
			j = p[j-1];
		if(s[i] == s[j])
			j++;
		p[i] = j;
	}
	return p;
}
vector<string> kmp(int N)
{
	vector<string> answ;
	for(int j = 0; j < N; j++)
	{
		int pl = patterns[j].length();
		int tl = text.length();
		vector<int> p;
		p = prefixFunction(patterns[j] + '#' + text);
		for(int i = 0; i < tl; i++)
		{
			if(p[pl+i+1] == pl)
			{
			    m[patterns[j]]++;
				answ.push_back(patterns[j]);			    	
			}
		}
	}
	return answ;
}
int main()
{
	freopen("input.txt", "r", stdin);		
	int N;
	while(true)
	{		
		map<string,int> mp;
		m.clear();
		cin >> N;
		if(N == 0)
			break;
		for(int i = 0; i < N; i++)
		{
			cin >> pattern;
			patterns[i] = pattern;
		}
		cin >> text;
		vector<string> answ;
		answ = kmp(N);
		int mx = -1;
		map<string, int> :: iterator it;		
		for(it = m.begin(); it != m.end(); it++)
		{
			if(it->second > mx)
			{
				mx = it->second;
			}
		}
		if(mx == 0 || mx == -1)
		{
			cout << 0 << endl;
			for(int i = 0; i < N; i++)
			{
				cout << patterns[i] << endl;
			}		
		}
		
		else
		{
			cout << mx << endl;
			int vsize = answ.size();
			for(int i = 0; i < vsize; i++)
			{
				if(m[answ[i]] == mx && mp[answ[i]] == 0)
				{
					cout << answ[i] << endl;
					mp[answ[i]] = 1;
				}
			}
		}
		
	}
	return 0;

}