#include <iostream>
#include <map>
const int MAXDNA = 30;

using namespace std;

int n, k;

map<string, int> dem;
map<string, bool> cx;
map<string, int> dodai;

void Nhap() {
	cin >> n >> k;
	int i, j, t;
	string s, scopy;		
	
	for (t=1; t<=n; t++) {
		cin >> s;
		cx.clear();	
		for (i=0; i<MAXDNA; i++) {
			for (j=i; j<MAXDNA; j++) {
				scopy = s.substr(i, j-i+1);
				cx[scopy] = false;
				dodai[scopy] = j - i + 1;
			}						
		}
		map<string, bool>::iterator p;
		for (p=cx.begin(); p!=cx.end(); p++)
			dem[p->first]++;
	}	
}

void KetQua() {
	int max = -1;
	map<string, int>::iterator i;
	for (i=dem.begin(); i != dem.end(); i++) 
		if (i->second >= k)
			if (max < dodai[i->first]) 
				max = dodai[i->first];								
	cout << max << endl;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	Nhap();
	KetQua();
}
	
