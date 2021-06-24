#include <bits/stdc++.h>
using namespace std;

int main(){
	ofstream fi ("PHANSO.INP");
	ofstream fo ("PHANSO.OUT");
	long long n, x;
	cin>>n;
	fi << n;
	x=n%2?n/2:n%4?n/2-2:n/2-1;
	cout<<x<<" "<<n-x;
	fo << x << " " << n - x;
	return 0;
}
