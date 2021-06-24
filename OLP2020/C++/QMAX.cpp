#include <bits/stdc++.h>
using namespace std;
#define ll long long
long long T[400000], a[400000];
 
void update(ll node, ll l, ll r, ll pos, ll value){
	if (l > pos || r < pos) return;
	if (l==r) T[node] = value;
	else {
		ll mid = (l + r) / 2;
		update(node*2, l, mid, pos, value);
		update(node*2+1, mid+1, r, pos, value);
		T[node] = max(T[node*2], T[node*2+1]);
	}
}
 
ll get(ll node, ll l, ll r, ll u, ll v){
	if (l > v || r < u) return 0;
	if (u <= l && r <= v) return T[node];
	else{
		ll mid = (l + r) / 2;
		return max(get(node*2,l,mid,u,v), get(node*2+1,mid+1,r,u,v));
	}
}

int main(){
	int n,m;
	a[0]=0;
	cin >> n >> m;
	while(m--){
		ll u, v, k;
		cin >> u >> v >> k;
		a[u]+=k;
		a[v+1]-=k;
	}
	for (ll i=1; i<=n; i++){
		a[i] += a[i-1];
		update(1,1,n,i,a[i]);
	}
	ll q;
	cin >> q;
	while(q--){
		ll u, v;
		cin >> u >> v;
		cout << get(1,1,n,u,v) << "\n";
	}
}
