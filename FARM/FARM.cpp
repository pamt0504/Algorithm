#include <bits/stdc++.h>
using namespace std;

int FARM[10001][10001];
int X[24] = {-1, 0, 1, 1, 1, 0, -1, -1, -2, -1, 0, 1, 2, 2, 2, 2, 2, 1, 0, -1, -2, -2, -2, -2};
int Y[24] = {-1, -1, -1, 0, 1, 1, 1, 0, -2, -2, -2, -2, -2, -1, 0, 1, 2, 2, 2, 2, 2, 1, 0, -1};
int M, N, K;

void loang(){
	for (int i=1; i<=M; i++){
		for (int j=1; j<=N; j++){
			if (FARM[i][j] == 1){
				for (int d=0; d<24; d++){
					if (FARM[i+X[d]][j+Y[d]] == 1) FARM[i+X[d]][j+Y[d]] = 1;
					else FARM[i+X[d]][j+Y[d]] = 2;
				}
			}	
		}
	}
}

int main(){
	ifstream fi ("4.inp");
	ofstream fo ("4.out");

	fi >> M >> N >> K;
	while (K--){
		int x, y;
		fi >> x >> y;
		FARM[x][y] = 1;
	}
	loang();
	int count = 0;
	for (int i=1; i<=M; i++){
		for (int j=1; j<=N; j++){
			if (FARM[i][j] == 0) count ++;
			cout << FARM[i][j] <<" ";
		}
		cout << endl;
	}
	fo << count ;
	return 0;
}
