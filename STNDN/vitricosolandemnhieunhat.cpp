#include <bits/stdc++.h>
using namespace std;

int n, A[10001], a, b;

int main(){
	ifstream fi ("6.inp");
	ofstream fo ("6.out");
	fi >> n;
	while (n--){
		fi >> a >> b;
		A[a] += 1;
		A[b+1] -= 1;
	}
	int res = A[0], id=0;
	for (int i=1; i<=10000; i++){
		A[i] = A[i-1] + A[i];
		if (res <= A[i]){
			res = A[i];
			id = i;
		}
	}
	fo << id;
}
