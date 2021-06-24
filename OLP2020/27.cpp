#include <bits/stdc++.h>
using namespace std;

int a[1000000], S[1000000];
int main(){
	multimap<int, vector<int> > m;
	int n, sum = 0; cin >> n;
	vector<int> temp;
	for (int i=1; i<=n; i++){
		cin >> a[i];
		if (a[i] >= a[i-1] && i!=n) {
			sum += a[i];
			temp.push_back(a[i]);
		}
		else {
			m.insert(pair<int, vector<int> > (sum,temp));
			for (int k=0; k<temp.size(); k++){
				cout << temp[k] << " ";
			}
			cout << "\n";
			sum = a[i];
			temp.clear();
			temp.push_back(a[i]);
		}
	}
	m.insert(pair<int, vector<int> > (sum,temp));
	map<int, vector<int> > :: iterator it;
	int maxx = 0;
	for (it = m.begin(); it != m.end(); it++){
		maxx = max (maxx, it->first);
	}
}
