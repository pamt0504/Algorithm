#include <bits/stdc++.h>
using namespace std;

long long A[10001], B[10001], C[10001];
long long n;
long long TK1(long long x){
	long long L, R, Mid;
	L=1; R=n;
	while (L<=R){
		Mid = (L+R) / 2;
		if (C[Mid] <= x) L = Mid + 1;
		else R = Mid - 1;
	}
	return L;
}

long long TK2(int x){
	long long L, R, Mid;
	L=1; R=n;
	while (L<=R){
		Mid = (L+R) / 2;
		if (C[Mid] <= x) L = Mid + 1;
		else R = Mid - 1;
	}
	return R;
}

int main(){
	ifstream fi ("TRIANGLE5.INP");
	ofstream fo ("TRIANGLE5.OUT");
	fi >> n;
	long long count=0;
	for (long long i=1; i<=n; i++) fi >> A[i];
	for (long long i=1; i<=n; i++) fi >> B[i];
	for (long long i=1; i<=n; i++) fi >> C[i];
	sort(C+1, C+n+1);
	for (long long i=1; i<=n; i++){
		for (long long j=1; j<=n; j++){
			long long x = TK1(abs(A[i]-B[j]));
			long long y = TK2(A[i]+B[j]-1);
			if (y>=x) count += (y-x+1);
		}
	}
	fo << count;
	fi.close();
	fi.close();
}
