#include <bits/stdc++.h>
using namespace std;

struct ds{
	int id, data;
};

vector <ds> F (10000);
vector<int> S (1000,0);

bool cmp1(ds a, ds b){
	return a.data < b.data;
}

bool cmp2(ds a, ds b){
	return a.id < b.id;
}

int main(){
	ifstream fi ("TEST01/Stone.inp");
	int n, m, k;
	fi >> m >> n >> k;
	int v[m];
	for (int i=0; i<m; i++) {
		fi >> v[i];
		bitset<8> bs(v[i]);
		for (int j=0; j<8; j++){
			F[i*8+(7-j)].data = bs[j];
			F[i*8+7-j].id = i*8+7-j;
		}
	}
	while (n--){
		int c, p, d, q;
		fi >> c >> p >> d >> q;
		for (int i = 8*c + 7-p; i <= 8*d + 7-q; i++){
			F[i].data = 0;
			S[i] = S[i-1] + F[i].data;
		}
	}
//	for (int i=1; i<=31; i++) cout << F[i].data;
//	cout << endl;
	while (k--){
		int c, p, d, q;
		fi >> c >> p >> d >> q;
		int s = 8*c + 7-p; 
		int f = 8*d + 7-q;
		bool kt = false;
		//cout << s << " " << f << endl;
		for (int i = s; i <= f; i++)
			if (F[i].data == 1) {
				kt = true;
				break;
			}
		if (kt){
			cout << "YES\n";
		}
		else cout << "PASS\n";
	}
}
