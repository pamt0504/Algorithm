#include <bits/stdc++.h>
using namespace std;

int main(){
	ofstream fi ("FACTOR.INP");
	ofstream fo ("FACTOR.OUT");
	int n,k;
	cin >> n >> k;
	fi << n << " " << k;
	if(n%2==0){
		cout << n+2*k;
		fo << n+2*k;
		return 0;
	}
	int p = 0;
	for(int i = n; i>=2; i--)
			if(n%i==0)
		    	p = i;
		fo << n+p+2*(k-1) << endl;
		cout << n+p+2*(k-1);
	return 0;
}
