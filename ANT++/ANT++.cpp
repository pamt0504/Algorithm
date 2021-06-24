#include <bits/stdc++.h>
using namespace std;

long long a[10001][10001];

int main(){
	ifstream fi ("5.inp");
	ofstream fo ("5.out");
	long long n, m, k;
	fi >> n >> m >> k;
	while (k--){
		long long x,y;
		fi >> x >> y;
		a[x][y] = -1;
	}
	for (int i=n; i>=1; i--) if (a[i][m] != -1) a[i][m] = 1; else break;
	for (int i=m; i>=1; i--) if (a[n][i] != -1) a[n][i] = 1; else break;
	for (int i=n-1; i>=1; i--){
		for (int j=m; j>=1; j--){
			if (a[i][j] != -1)
				a[i][j] = max (a[i][j], max (a[i+1][j], max(a[i][j+1], a[i+1][j] + a[i][j+1]))); 
		}	
	}
//	for (int i=1; i<=n; i++){
//		for (int j=1; j<=m; j++){
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
cout << a[1][1];
	fo << a[1][1];
	return 0;
}
