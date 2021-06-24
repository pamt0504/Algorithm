#include <bits/stdc++.h>
using namespace std;

vector <int> T (100000000,0);

void update(int id, int l, int r, int pos, int value){
	if (pos < l || pos > r) return;
	if (l==r) T[id] = value;
	else {
		int mid = (l + r) / 2;
		update(2*id+1, l, mid, pos,value);
		update(2*id, mid+1, r, pos, value);
		T[id] = T[id*2] + T[id*2+1];
	}
}

int get(int id, int l, int r, int u, int v){
	if (l > v || u > r) return 0;
	if (l >= u && v <=r) return T[id];
	else {
		int mid = (l+r)/2;
		return get(id*2,l,mid,u,v) + get(id*2+1,mid+1,r,u,v);
	}	
}

int main(){
	int m, n, k;
	cin >> m >> n >> k;
	for (int index = 1; index <= m; index++){
		int x;
		cin >> x;
		bitset<8> bs(x);
		for (int i=0; i<8; i++){
			if (bs[i] == 1) update(1, 1, 8000000, index*8+i, 1);
		}
	}
	while (1){
		int x; cin >> x;
		cout << get(1,1,8000000,0,8) << endl;
	}
	return 0;
}
