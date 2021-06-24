#include <bits/stdc++.h>
using namespace std;

long long n, i, x, dem, b[1000000];

int main(){
	ifstream fi ("5.inp");
	ofstream fo ("5.out");
	fi >> n;
	for (i = 1; i<=n; i++){
		fi >> x;
		if (b[x] == 0) dem++;
		b[x] = 1;
	}
	fo << dem;
}
