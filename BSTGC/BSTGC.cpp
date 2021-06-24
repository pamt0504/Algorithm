#include <bits/stdc++.h>
using namespace std;

const long long MAX = 1e7 + 5, mod = 1e9 + 7, div2 = 500000004, div6 = 166666668;
long long a[MAX], cnt[MAX], s[MAX], n, maxx;
long long res;

long long aka3(long long p){
	return p%mod*(p-1)%mod*(p-2)%mod*div6%mod;
}
long long aka2(long long p){
	return p%mod*(p-1)%mod*div2%mod;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	for (int i=1; i<=n; i++){
		cin >> a[i];
		cnt[a[i]]++;
		maxx =  max (maxx, a[i]);
	}
	for (int i=1; i<=maxx; i++){
		s[i] = s[i-1] + cnt[i];
	}
	for	(long long i=1; i<=maxx; i++){
		res = res+((aka2(cnt[i])*(s[min(2*i-1,maxx)]-cnt[i])%mod)+aka3(cnt[i]))%mod;
		res = res % mod;
	}
	cout << res;
}
