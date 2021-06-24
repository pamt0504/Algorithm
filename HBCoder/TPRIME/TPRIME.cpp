#include <bits/stdc++.h>
using namespace std;

long long n, i, j, dem;

int main(){
	//ifstream fi ("TPRIME1.INP");
	//ofstream fo ("TPRIME1.OUT");
	cin >> n;
	dem = 0;
	for (i = 2; i <= sqrt(n); i++){
		j = 2;
		while (j <= sqrt(i) && i %j != 0) j++;
		if (j > sqrt(i)) dem++;
	}
	cout << dem;
}
