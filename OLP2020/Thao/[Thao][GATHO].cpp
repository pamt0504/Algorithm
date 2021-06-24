#include <bits/stdc++.h>
using namespace std;

int main(){
	int m, n;
	cin >> m >> n;
	int a = (4*m - n)/2;
	int b = (m-a);
	if (a >= 0 && b >=0 && n % 2 == 0 && 4*m >= n)
		cout << a << " " << m - a;
	else cout << -1;
}
