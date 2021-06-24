//co N dong xu, moi loai co do day t. Can 3 chan ban moi chan la 1 loai dong xu. Tim do cao h. tim cach ghep 4 chan ban co h1 sao cho h1 lon nhat h1 <= h
// 4 1000
// 100 200 400 50
// 800 1200

#include <bits/stdc++.h>
using namespace std;
 
int lcm(int a, int b, int c, int d){
	int res;
	res = (a*b)/(__gcd(a,b));
	res = (res*c)/(__gcd(res,c));
	res = (res*d)/(__gcd(res,d));
	return res;
}

int main()
{
	int n, h, a[10000];
	cin >> n >> h;
	for (int i=1; i<=n; i++) cin >> a[i];
	int ans = a[1] * a[2] * a[3] * a[4];
	for (int i=1; i<=n-3; i++){
		for (int j=i+1; j<=n-2; j++){
			for (int k=j+1; k<=n-1; k++){
				for (int l=k+1; l<=n; l++){
					ans = min(ans, lcm(a[i], a[j], a[k], a[l]));
				}
			}
		}
	}
	int t = h/ans;
	if (ans*(t) < h) cout << ans * t << " " << ans * (t+1);
	else cout << ans * t << " " << ans * (t); 
	
}
