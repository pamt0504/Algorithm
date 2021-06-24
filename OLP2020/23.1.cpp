#include <bits/stdc++.h>
using namespace std;

int m, n;
long long a[1010][1010];
int chk[1010][1010];
long long F[1010][1010];

int main(){
	cin >> m >> n;
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    if (m>n) {
    	cout << "0";
		return 0;	
	}
    if (m == n){
    	int res = 0;
    	for (int i=1; i<=n; i++) res+= a[i][i];
    	cout << res;
    	return 0;
    }
    for (int i = 1; i <= m; i++){
    	for (int j= i; j <= n; j++){
    		F[i][j] = max (F[i-1][j-1] + a[i][j], F[i][j-1]);
		}
	}
	cout << F[m][n];
}
