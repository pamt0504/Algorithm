#include <bits/stdc++.h>
using namespace std;

int maint(){
	int n, m;
	int u[10000], v[10000];
	cin >> n >> m;
	for (int i=1; i<=m; i++){
		cin >> u[i];
	}
	for (int i=1; i<=n; i++){
		cin >> v[i];
	}
	int MIN = u[1], MAX = V[1];
	int idMin, idMax;
	for (int i=1; i<=m; i++){
		if (MIN > u[i]) {
			idMin = i;
			MIN = u[i];
		}
		if (MAX < u[i]){
			idMax = i;
			MAX = u[i];
		}
	}
	for (int i=1; i<=n; i++){
		for (int j=i; j<=i+m; j++){
			
		}
	}
}
