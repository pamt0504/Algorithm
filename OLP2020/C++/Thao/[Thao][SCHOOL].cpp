#include <bits/stdc++.h>
using namespace std;

int main(){
	int A[100][100], distance[100][100];
	int n, m, k;
	cin >> n >> m >> k; 
	while (m--){
		int x, y, z, t;
		cin >> x >> y >> z >> t;
		A[x][y] = A[y][x] = t;
	}
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			if (i==j) A[i][j] = 0;
			else if (A[i][j]) distance[i][j] = A[i][j];
			else distance[i][j] = 999999;
		}
	}
	for (int k=1; k<=n; k++){
		for (int i=1; i<=n; i++){
			for (int j=1; j<=n; j++){
				distance[i][j] = min (distance[i][j], distance[i][k] +  distance[k][j]);
			}
		}
	}
	cout << max(distance[1][k], distance[1][n]);
}
