#include <bits/stdc++.h>
using namespace std;
 
int f[20][5005];
int n, c;
int w[20];
 
int max( int a, int b ) {
	return a > b ? a : b;
}
 
int main() {
	ifstream fi("10.INP");
	ofstream fo("10.OUT");
	fi >> c >> n;
	for( int i = 0; i < n; ++i ) fi >> w[i];
	for( int i = 0; i <= n; ++i )
		for( int j = 0; j <= c; ++j )
			if ( i == 0 || j == 0 ) f[i][j] = 0;
			else f[i][j] = max( f[i-1][j], j >= w[i-1] ? w[i-1] + f[i-1][j-w[i-1]] : 0 );
	fo << f[n][c];
	return 0;
}
