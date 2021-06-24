#include <bits/stdc++.h>
using namespace std;

int Fx[4] = {0, 1, 0, -1};
int Fy[4] = {1, 0, -1, 0};
int Dx[4] = {1, 0, -1, 0};
int Dy[4] = {0, -1, 0, 1};
int main(){
	int n, a, b, x, y, id;
	cin >> n;
	cin >> a >> b;
	cin >> x >> y;
	for (int i=0; i<4; i++){
		if (x-a == Fx[i] && y-b == Fy[i]) {
			id = i;
//			cout << id;
		}
	}
	int cnt = 0;
	for (int i=3; i<=n; i++){
		cin >> a >> b;
		if (a-x == Dx[id] && b-y == Dy[id]) {
			cnt ++;
		}
		for (int i=0; i<4; i++){
			if (a-x == Fx[i] && b-y == Fy[i]) {
				id = i;
//				cout << id;
			}
		}
		x = x+a; y = b+y;
	}
	cout << cnt;
}
