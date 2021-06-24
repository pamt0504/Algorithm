#include <bits/stdc++.h>
using namespace std;

int main()
{
	ifstream fi ("8.inp");
	ofstream fo ("8.out");
	long long m, n, k;
	fi >> n >> m;
	for(int i = 0; i < n; i++)
	{
		fi >> k;
		m = __gcd(m, k);
	}
	fo << m * n;
	cout << m * n;
	return 0;
}
   
