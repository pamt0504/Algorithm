        #include <bits/stdc++.h>
using namespace std;

int main(){
	ifstream fi ("5.INP");
	ofstream fo ("5.OUT");
	int n, x, ans = 0;
	fi >> n;
	for (int i=1; i<=n; i++){
		fi >> x;
		fo << (x * i) - ans << " "; 
		ans += (x * i) - ans;
	}
	return 0;
}
