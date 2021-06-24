#include <bits/stdc++.h>
using namespace std;
int N, M, A[1000001];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> N >> M;
	int MAX = INT_MIN;
	for (int i=1; i<=M; i++){
		cin >> A[i];
		MAX = max(A[i], MAX);
	}
	int L = 1, R = MAX, res;
	while (L <= R){
		int Mid = (L+R)/2, temp = 0;
		bool kt = true;
		for (int i=1; i<=M; i++){
			if (A[i] > Mid) {
				temp += A[i] / Mid;
				if (A[i] % Mid != 0) temp += 1;
			} 
			else {
				temp += 1;
			}
			if (temp > N) {
				kt = false;
				break;
			}
		}
		if (kt == true){
			R = Mid - 1;
			res = Mid;
		}
		else {
			L = Mid + 1;
		}
	}
	cout << res;
}
