#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int arr[n];
	for (int i=0; i<n; i++) cin >> arr[i];
	sort(arr,arr+n, greater<int>());
	int res = arr[0];
	for (int i=1; i<n; i++){
		if (res > 0) res -= arr[i];
		else res += arr[i];
	}
	cout << res;
}
