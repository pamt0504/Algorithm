#include <bits/stdc++.h>
using namespace std;
int n, a[10000001], d[10000001], s[10000001], kt[10000001],cnt=0;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	for (int i=1; i<=n; i++){
		cin >> a[i];
		if (kt[a[i]] == 0){
			cnt++;
			d[cnt] = a[i];
		}  
		kt[a[i]]++;
	}
	sort(d+1,d+cnt+1);
	s[d[1]] = 0;
	for (int i=2; i<=cnt; i++){
		s[d[i]] = s[d[i-1]] + kt[d[i-1]];
	}
	for (int i=1; i<=n; i++){
		cout << s[a[i]] << " ";
	}
}
