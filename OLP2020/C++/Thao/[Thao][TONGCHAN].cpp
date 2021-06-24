#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long n, res = 0;
	cin >> n;
	for (int i=1; i<=n; i++){
		long long x;
		cin >> x;
		if (x%2 == 0) res += x;
	}
	cout << res;
}
