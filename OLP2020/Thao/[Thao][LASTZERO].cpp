#include <bits/stdc++.h>
using namespace std;
// 50 = 2 x 5^2;
int main(){
	int n; cin >> n;
	int d = 5, res = 0;
	while (n >= d){
		res += n/d;
		d = d*5;
	}
	cout << res;
}
