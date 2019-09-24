#include <bits/stdc++.h>
using namespace std;

long long is[5010];
int main(){

	long long n, k;
	cin >> n >> k;
	long long a[n];
	set<long long> s;
	
		for(long long i = 0 ; i < 5010; i++){
			is[i] = 1;
		}

		for(long long i = 0; i < n; i++){
			cin >> a[i];
			s.insert(a[i]);
		}

		for(long long i = 0; i < n; i++){
			for(long long j = i + 1; j <= n - 1; j++){
				if(a[i] == a[j]){
					is[j] += 1;
				}
			}
		}

		vector<long long> maxx;

		for(long long i = 0; i < n; i++){
			maxx.push_back(is[i]);
		}

	sort(maxx.begin(), maxx.end());

		int maxi = maxx[n - 1];
		
		
		else if(k >= maxi) {
			cout << "YES" << endl;
		for(long long i = 0; i < n; i++){
			cout << is[i] << " ";
		}
		}
		else cout << "NO";
	return 0;
}