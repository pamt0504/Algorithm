#include <bits/stdc++.h>
using namespace std;

int main()
{
	ifstream fi ("candy.inp");
	int n, x, res = 0;
	cin >> n >> x;
	vector <long long> v;
	vector <long long> :: iterator it;
	for (int i=0; i<n; i++){
		int x; cin >> x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	for (int e = 1; e < n; e++){
		int low = 0, high = e;
		while (low < n-high){
			int temp = v[low] + v[n-high];
			it = lower_bound(v.begin() + low + 1 , v.end() - high - 1, x-temp);
			int i = it - v.begin();
			if (temp + *it < x){
				low++;
			}
			else {
				res += (v.end() - high - it) * 6;
				high++;
			}
		}
	}
	cout << res;
	return 0;
}
