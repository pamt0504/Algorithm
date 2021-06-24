#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, sum = 0, cnt = 0;
	cin >> n;
	while (n--){
		int x; cin >> x;
		if (x % 2 == 0) {
			sum += x;
			cnt++;
		}
	}
	cout << sum / cnt;
}
