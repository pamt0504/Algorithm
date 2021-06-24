#include <bits/stdc++.h>
using namespace std;

long long n, S, minn, id, a[4000000], sum[4000000], i, d;

long long TKNP(long long x, int length){
	int R = length;
	int L;
	if (R > n) L=R-n;
	else L=1;
	while (L<=R){
		int mid =(L+R) / 2;
		if (sum[mid] <= x) L=mid+1;
		else R=mid-1;
	}
	return L;
}

int main(){
	cin >> n >> S;
	for (i=1; i<=n; i++) cin >> a[i];
	d=1;
	for (i=n+1; i<=2*n; i++){
		a[i] = a[d];
		d++;
	}
	for (i=1; i<=2*n; i++) sum[i] = sum[i-1] + a[i];
	minn = INT_MAX;
	if (sum[n] < S) {
		cout << "-1"; return 0;
	}
	for (i=1; i<2*n; i++){
		if (sum[i] >= S){
			id = TKNP(sum[i]-S,i);
//			cout << id << " " << i << endl;
			if (minn > (i-id+1)) minn = i-id+1;
		}
	}
	cout << minn;
}
