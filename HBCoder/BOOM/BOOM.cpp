#include <bits/stdc++.h>
using namespace std;

int A[101][101];

int X[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
int Y[8] = {-1, -1, -1, 0, 1, 1, 1, 0};

int main(){
	ifstream fi ("10.inp");
	ofstream fo ("10.out");
	int M, N; fi >> M >> N;

	for (int i=1; i<=M; i++){
		for (int j=1; j<=N; j++){
			fi >> A[i][j];
		}
	}
	for (int i=1; i<=M; i++){
		for (int j=1; j<=N; j++){
			int count = 0;
			if (A[i][j] != -1){
				for (int k=0; k<8; k++){
					if (A[i+X[k]][j+Y[k]] == -1) count++;
				}
				A[i][j] = count;
			}
		}
	}
	for (int i=1; i<=M; i++){
		for (int j=1; j<=N; j++){
			fo << A[i][j] <<" ";
		}
		fo << endl;
	}
	return 0;
}
