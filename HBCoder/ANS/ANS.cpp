#include <bits/stdc++.h>
using namespace std;

int n, a[100001], F[100001];

int main(){
	ifstream fi("5.inp");
	ofstream fo("5.out");
	fi >> n;
	for (int i=1; i<=n; i++){
		fi >> a[i];
		F[i] = max(F[i-1], a[i]);
		fo << F[i] <<" ";
	}
	return 0;
}
