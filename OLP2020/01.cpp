#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	multiset <int > m;
	int n, k, x;
	cin >> n >> k;
	for (int i=0; i<n; i++){
		cin >> x;
		m.insert(x);
	}
	multiset <int > :: iterator itr; 
	itr = m.begin();
	advance(itr,k-1);
	cout << *itr;
}

