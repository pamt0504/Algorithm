#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	int res = 0;
	for (int i = 0; i <= c/a; i++){
		int x = (c - (i*a)) / b;
		res = max (res, i*a+x*b);
	}
	cout << res;
}
