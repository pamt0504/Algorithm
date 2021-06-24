#include <bits/stdc++.h>
using namespace std;

int T[100000];

int query(int node, int l, int r, int u, int v){
    if (v<l || r<u) { return INT_MIN; }
    if (u<=l && r<=v) return T[node];
    return __gcd(
        query(node*2, l, (l+r)/2, u, v),
        query(node*2+1, (l+r)/2+1, r, u, v)
    );
}

void update(int node, int l, int r, int i, int v){
	if (i<l or i>r or l>r) return;
    if (l!=r){
        update(node*2, l, (l+r)/2, i, v);
        update(node*2+1, (l+r)/2+1, r, i, v);
        T[node] = __gcd(T[node*2], T[node*2+1]);
        cout << node << " " << v << endl;
    }
    else {
    	T[node] = v;
			
	}
}

int main(){
	int n, k;
	cin >> n >> k;
	int a[n+1], b[n+1], c[n+1];
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
	for(int i=1; i<=n; i++){
		cin >> b[i];
		c[i] = abs(a[i]-b[i]);
		update(1,1,n,i,abs(a[i]-b[i]));
	}
//	while (k--){
//		int L, R;
//		cin >> L >> R;
//		int result = query(1,1,n,L,R);
//		cout << result << endl;
//	}
//	for (int i=1; i<=n; i++){
//		cout << T[i] << " " << T[i*2] << " " << T[i*2+1] << "\n";
//	}
}
