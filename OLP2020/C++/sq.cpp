#include <bits/stdc++.h>
using namespace std;

int A[1000000], M[1000000], F[1000000];

int main(){
	int n;
	cin >> n;
	int i1 = 1, i2 = 1;
	for (int i=1; i<=n; i++){
		cin >> A[i];
		if (A[i] > 0) M[i1++] = i;
		else F[i2++] = i;
	}
	int countA = 0 ;
	for (int i=1; i<i1-1; i++){
		for (int j=i+1; j<i1; j++){
			if (M[j] - M[i] > 2 && A[M[j]] > A[M[i]]) countA++;
		}
	}
	int countB = 0;
	for (int i=1; i<i2-1; i++){
		for (int j=i+1; j<i2; j++){
			if (F[j] - F[i] > 2 && A[F[j]] > A[F[i]]) countB++;
		}
	}
	cout << countA << " " << countB;
}
