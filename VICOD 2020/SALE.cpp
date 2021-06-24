#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, k, p;
	cin >> n >> k >> p;
	cout << ((n / (k+1))+ (n % (k+1)))* p;
	return 0;
}
