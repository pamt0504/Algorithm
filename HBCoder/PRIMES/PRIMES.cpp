#include <bits/stdc++.h>
using namespace std;

const int MAXN = 10000000;
bool check[MAXN];

void sieve() {

	fill(check, check+MAXN, 1);
	check[0] = 0; check[1]=1;
	for (int i = 2; i * i <= MAXN; i++) {
		if (check[i] == true) {
			for (int j = i * i; j <= MAXN; j += i) {
				check[j] = false;
			}
    	}
	}
}

int main(){
	sieve();
	ofstream fi ("5.inp");
	ofstream fo ("5.out");
	int n, count=0;
	cin >> n;
	fi << n;
	for (int i=2; i<=n/2; i++){
		if (check[i]){
			if (check[n-i]){
				count++;
			}
		}
	}
	cout << count;
	fo << count;
	return 0;	
}
