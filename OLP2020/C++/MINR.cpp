#include <bits/stdc++.h>
using namespace std;

int T[400000];

void update(int node, int l, int r, int pos, int value){
	if (l > pos || r < pos){
		return;
	}
	if (l == r){
		T[node] = value;
	}
	else{
		int mid = (l + r) / 2;
		update(node*2, l, mid, pos, value);
		update(node*2+1, mid+1, r, pos, value);
		T[node] = min(T[node*2], T[node*2+1]);
	}
}

int get(int node, int l, int r, int u, int v){
	if (r < u || l > v) return INT_MAX;
	if (u <= l && v >= r) return T[node];
	else {
		int mid = (l + r) / 2;
		return min(get(node*2, l, mid, u, v), get(node*2+1, mid+1, r, u, v));
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	for (int i=1; i<=n; i++){
		int x;
		cin >> x;
		update(1, 1, n, i, x);
	}
	while (m--){
		int L, R;
		cin >> L >> R;
		cout << get(1,1,n,L,R) << "\n";
	}
}
