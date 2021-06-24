#include <bits/stdc++.h>
using namespace std;

string X,Y;
int F[1000][1000], n, m;

void DP(){
//	for (int i=0; i<=m; i++) F[i][-1] = 1e9;
//	for (int j=0; j<=n; j++) F[-1][j] = 1e9;
	for (int j=0; j<=n; j++) F[0][j] = j;
	for (int i=1; i<=m; i++) F[i][0] = i;
	for (int i=1; i<=m; i++)
		for (int j=1; j<=n; j++){
			if (X[i] == Y[j]) F[i][j] = F[i-1][j-1];
			else 
				F[i][j] = min (F[i][j-1], min (F[i-1][j-1], F[i-1][j])) + 1;
		}
}
int main(){
	getline(cin, X);
	getline(cin, Y);
	n = X.size();
	m = Y.size();
	X = " " + X;
	Y = " " + Y;
	DP();
	while (m != 0 || n!=0){
		if (X[m] == Y[n]) m--, n--;
		else {
			cout << X << "->";
			if (F[m][n] == F[m][n-1]+1){
				cout << "Insert(" << m << "," << Y[n] << ")";
				Y.insert(m+1, X);
				n--;
			}
			else 
				if (F[m][n] == F[m-1][n-1]+1){
					cout << "R(" << m << "," << Y[n] << ")";
					X[m] = Y[n];
					m--;
					n--;
				}
				else{
					cout << "D(" << "m" << "," << Y[n] << ")";
					X.erase(m,1);
					m--;
				}
		}
		cout << X << endl;
	}
		
	return 0;
}
