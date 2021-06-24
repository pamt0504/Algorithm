#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;
int d[MAX], F[MAX][MAX], T[MAX][MAX], n;

int main(){
	cin >> n;
	for (int i=0; i<n; i++) cin >> d[i];
	
	for (int i=0; i<=n; i++) F[i][i] = 0;
	for (int i=1; i<=n-1; i++) F[i][i+1] = d[i-1] * d[i] * d[i+1];

	for (int L=2; L<n; L++){
		for (int i=1; i<=n-L+1; i++){
			int j = i+L-1;
			F[i][j] = INT_MAX;
			for (int k=i; k<j; k++){
				F[i][j] = min(F[i][j], F[i][k] + F[k+1][j] + d[i-1]*d[k]*d[j]);
			}
		}
	}
	cout << F[1][n-1];
}
