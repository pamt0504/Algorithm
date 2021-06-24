#include <bits/stdc++.h>
using namespace std;

int G[100][100], visited[100], cnt;
int n, m, u, v;

void DFS (int u){
	cout << u << " ";
	visited[u] = 1;
	for (int v=1; v<=n; v++){
		if (G[u][v] == 1 && visited[v] == 0) DFS(v);
	}
}

int main(){
	cin >> n >> m;
	for (int i=1; i<=m; i++){
		cin >> u >> v;
		G[u][v]++;
		G[v][u]++;
	}
	for (int i=1; i<=n; i++){
		if (visited[i] == 0) {
			DFS(i);
			cnt++;
		}
	}
	cout << endl << cnt;
}
