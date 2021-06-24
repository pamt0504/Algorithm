#include <bits/stdc++.h>
using namespace std;

const int N = 300005;
int a[N], r, n;
long long dem;

int main(){
	ifstream fi ("PHODIBO10.INP");
	ofstream fo ("PHODIBO10.OUT");
	fi >> n >> r;
	for (int i=1; i<=n; i++) fi >> a[i];
	sort(a+1,a+n+1);
	for (int i=1; i<n; i++){
		int d=i+1, c=n, g;
		long long res = 0;
		while (d<=c){
			g=(d+c)/2;
			if (a[g]-a[i]>r){
				res = n-g+1;
				c=g-1;
			}
			else d=g+1;
		}
		dem=dem+res;
	}
	fo << dem;
}
