#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, res;
	cin >> n;
	res = n/2;
	if (n%2 == 0) cout << (res+1) * (res+1);
	else cout << (res+1) * (res+2);
	return 0;
}
