#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0);
	int n, x; 
	cin >> n >> x;
	vector <pair<int,int> > v;
	for (int i=1; i<=n; i++){
		pair<int, int> p;
		int a; cin >> a;
		p.first = a;
		p.second = i;
		v.push_back(p);
	}
	sort(v.begin(),v.end());
	for (int i=0; i<n; i++){
		int target = x-v[i].first;
		int l=0, r=n-1;
		while (l!=r){
			if (l!=i && r!=i && v[l].first + v[r].first == target){
				cout << v[i].second << " " << v[l].second << " " << v[r].second;
				return 0;
			}
			if (v[l].first + v[r].first < target) l++;
			else r--;
		}
	}
	cout << "IMPOSSIBLE";
}
