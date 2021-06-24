#include <bits/stdc++.h>
using namespace std;
	int n, m, F[100][100], a[100][100];

void Print(){
	cout << "================================\n";
	for (int i=1; i<=n; i++){
		for (int j=1; j<=m; j++){
			cout << F[i][j] << " ";
		}
		cout << endl;
	}
	cout << "================================\n";
}	
	
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ifstream fi ("12.inp");
	
	fi >> n >> m;
	for (int i=0; i<=n; i++){
		for (int j=0; j<=m; j++){
			F[i][j] = 0;
		}
	}
	for (int i=1; i<=n; i++){
		for (int j=1; j<=m; j++){
			fi >> a[i][j];
		}
	}
	for (int i=1; i<=n; i++){
		F[i][1] = a[i][1];
	}
//	Print();
	for (int j=1; j<=m; j++){
		for (int i=1; i<=n; i++){
			F[i][j] = max (F[i-1][j-1], max(F[i][j-1], F[i+1][j-1])) + a[i][j];
		}
//		Print();
	}
	int res = a[1][m];
	Print();
	for (int i=1; i<=n; i++){
		res = max (res, F[i][m]);
	}
	cout << res << endl;
	int j = m;
	while (j>0){
		for (int i=n; i>=1; i--){
			if (F[i][j] == res) {
				cout << i << " " << j << endl;
				res-=a[i][j];
				j--;
				break;
			}
		}	
	}
}
