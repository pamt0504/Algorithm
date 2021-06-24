#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000000;

int isPrime[MAXN], S[MAXN];

void sieve(){
	for (int i=2; i<=MAXN; i++) isPrime[i] = 1;
	for (int i=2; i<=sqrt(MAXN); i++){
		if (isPrime[i] == 1){
			for (int j=2; j<=MAXN/i; j++){
				isPrime[i*j] = 0;
			}
		}
	}
	int cnt = 1;
	for (int i=2; i<=MAXN; i++){
		if (isPrime[i] == 1){
			S[cnt] = S[cnt-1] + i;
			cnt++;
		}
	}
}
int BIN(int l, int r, int value){
	int mid = (l + r) / 2;
	while (l > r){
		if (S[mid] < value) l = mid;
		if (S[mid] == value) return 1;
	}
}

int main(){
	sieve();
	int n;
	while (cin >> n){
		int num = 0;
		for (int i=0; n > S[i]; i++){
			num += BIN(0, i, n);
		}
		cout << num;
	}
}
