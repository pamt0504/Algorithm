#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int res = (n/4096);
	if (n%4096 != 0 ) res++;
	cout << res*4;
}
