#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, a[10000], maxx = 0;
	cin >> n >> m;
	for (int i=1; i<=n; i++) {
		cin >> a[i];
		maxx = max (maxx, a[i]);	
	}
	int l = 0, r = maxx, mid, s, count;
	bool kt = true;
	while (l < r){
		mid = (l+r)/2;
		count = m;
		for (int i=1; i<=n; i++){
			if (a[i] >= mid) {
				count -= a[i]/mid;	
			}
		}
		if (count <= 0) l = mid + 1;
		else r = mid;
	}
	cout << mid;
}
