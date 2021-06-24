#include <bits/stdc++.h>
using namespace std;

long a[100000];

int main(){
	long n, k, sum = 0;
	ifstream fi ("6.inp");
	ofstream fo ("6.out");
	fi >> n >> k;
	for (long i=0; i<n; i++){
		fi >> a[i];
		sum += a[i];
	}
	sort(a,a+n);
	long res = 0;
	for (long i=0; i<n-k; i++){
		res += a[i];
	}
	fo << sum - res;
}
