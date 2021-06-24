#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int a[n+1], b[n+1], c[n+1];
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
	for(int i=1; i<=n; i++){
		cin >> b[i];
		c[i] = abs(a[i]-b[i]);
	}
	while (k--){
		int L, R;
		cin >> L >> R;
		int result = c[L];
		for(int i=L; i<=R; i++){
			result = __gcd(result, c[i]);
		}
		cout << result << endl;
	}
}
