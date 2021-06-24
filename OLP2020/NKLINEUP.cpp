#include <bits/stdc++.h>
using namespace std;

struct DATA{
	int MIN, MAX;
};

DATA T[1000000];
int resmax, resmin;

void update(int node, int l, int r, int pos, int value){
	if (l > pos || pos > r) return;
	if (l==r) {
		T[node].MAX = value;
		T[node].MIN = value;
	}
	else {
		int mid = (l + r) / 2;
		update(node*2, l, mid, pos, value);
		update(node*2+1, mid+1, r, pos, value);
		T[node].MAX = max(T[node*2].MAX, T[node*2+1].MAX);
		T[node].MIN = min(T[node*2].MIN, T[node*2+1].MIN);
	}
}

void get(int node, int l, int r, int u, int v){
	if (l > v || r < u) return ;
	if (l>=u && v>=r) {
		resmax = max(resmax, T[node].MAX);
		resmin = min(resmin, T[node].MIN);
		return;
	}
	else {
		int mid = (l + r) / 2;
		get(node*2, l, mid, u, v);
		get(node*2+1, mid+1, r, u, v);
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(false);
	cout.tie(false);
	int N, Q, x;
	cin >> N >> Q;
	for (int i=1; i<=N; i++) {
		cin >> x;
		update(1,1,N,i,x);
	}
	while (Q--){
		int A, B;
		cin >> A >> B;
		resmax = 0, resmin = 10000000;
		get(1,1,N,A,B);
		cout << resmax - resmin << endl;
	}
}
