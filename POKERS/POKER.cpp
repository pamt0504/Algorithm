#include <bits/stdc++.h>
using namespace std;
 
#define PB push_back
 
typedef long long ll;
typedef vector<int> vi;
ifstream fi ("POKERS5.INP");
ofstream fo ("POKERS5.OUT");
 
void solve()
{
	int n,m,k;
 
	fi >> n >> m >> k;
 
	int cards = n/k;
 
	if(cards >= m){
		fo << m << "\n";
		return;
	}
	else{
		int x = m - cards;
 
		if(x/(k-1) == 0){
			fo << cards-1 << "\n";
			return;
		}
		else{
			(x % (k-1) == 0) ? fo << cards-(x/(k-1)) << "\n" : fo << cards-(x/(k-1))-1 << "\n";
			return; 
		}
	}
}
 
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
 
	int t;
 
	fi >> t;
 
	while(t--)
		solve();
 
	return 0;
}
