#include <bits/stdc++.h>

using namespace std;

int best = 9999, n;
int d[1000], h[1000], a[1000];

int dem(){
	int d=0;			
	for (int i=0; i<n; i++){
		for (int k=i+1; k<n; k++){
			for (int j=k+1; j<n; j++){
				if (a[h[i]] + a[h[j]] == 2 * a[h[k]]) d++;
			}
		}
	}
	return d;
}

void duyet(int i){
	if (i==n){
		int sl = dem();
		if (sl < best) {
			best = sl; 
		}
	}
	else{
		for (int j=0; j<n; j++){
			if (d[j] == 0){
				h[i] = j;
				d[j] = 1;
				duyet(i+1);
				d[j] = 0;
				h[i] = 0;
			}
		}
	}
}

int main(){
	cin >> n;
	for (int i=0; i<n; i++) cin >> a[i];
	duyet(0);	
	cout << best;
}
