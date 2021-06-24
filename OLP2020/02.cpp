#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	long long a[200000];
	a[1]=a[2]=a[3]=a[4]=1;
	for (int i=5; i<=200000; i++){
		a[i] = (a[i-1]  + a[i-4] ) % mod;
	}
	cout << a[n+1];
}
