#include <bits/stdc++.h>
using namespace std;

int T[10000];

void update(int node, int l, int r, int pos, int value){
	if (pos < l || pos > r) return;
	if (l==r) T[node] = value;
	else{
		int mid = (l + r) / 2;
		update(2*node, l, mid, pos, value);
		update(2*node + 1, mid+1, r, pos, value);
		T[node] = max(T[2*node], T[2*node+1]);
	}
}

int get(int node, int l, int r, int u, int v){
	if (r<u || l>v) return 0;
	if (u<=l && r<=v) return T[node];
	else{
		int mid = (l + r) / 2;
		return max(get(2*node, l, mid, u, v), get(2*node + 1, mid+1, r, u, v));
	}
}

int main(){
	for (int i=1; i<=7; i++)
		update(1,1,7,i,i);
	cout << get(1,1,7,3,7);
}
