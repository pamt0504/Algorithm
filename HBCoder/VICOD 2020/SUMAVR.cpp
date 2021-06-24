#include <bits/stdc++.h>
using namespace std;

int main(){
	ifstream fi ("SUMAVR.INP");
	ofstream fo ("SUMAVR.OUT");
	int n, x, ans = 0;
	fi >> n;
	for (int i=1; i<=n; i++){
		fi >> x;
		ans = (x * i) - ans;
		fo << ans << " "; 
	}
	return 0;
}
