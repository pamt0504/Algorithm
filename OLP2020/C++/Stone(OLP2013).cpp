#include <bits/stdc++.h>

using namespace std;




//vector<int> F(10000000);

//vector<int> S(10000000);

int F[10000000], S[10000000];

int main(){

	ios_base::sync_with_stdio(false);

	cin.tie(0);

	cout.tie(0);

	int n, m, k;

	cin >> m >> n >> k;

	int v[m];

	for (int i=0; i<m; i++) {

		cin >> v[i];

		bitset<8> bs(v[i]);

		for (int j=0; j<8; j++){

			F[i*8+(7-j)] = bs[j];

		}

	}

	while (n--){

		int c, p, d, q;

		cin >> c >> p >> d >> q;

		S[8*c+7-p] -= 1;

		S[8*d+7-q +1] += 1;

	}

	int ans = 0;

	for (int i=0; i<=8000000; i++){

		ans += S[i];

		if (ans < 0 ) S[i] = 0;

		else S[i] = F[i];

		S[i] = S[i-1] + S[i];

	}

	while (k--){

		int c, p, d, q;

		cin >> c >> p >> d >> q;

		int s = 8*c+7-p, f = 8*d+7-q;

		if (S[f] - S[s-1] > 0) cout << "YES\n";

		else cout << "PASS\n";

	}

	return 0;

}