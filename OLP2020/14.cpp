// Input:
// Dong dau tien chua 2 so nguyen L (lengthAB), N (so kien)
// N dong tiep theo chua cac cap


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t, L, N;
	cin >> t;
	while (t--){
		int maxx = 0, minn = 0, temp;
		cin >> L >> N;
		for (int i=1; i<=N; i++){
			cin >> temp;
			minn = max(minn, min(temp, L-temp));
			maxx = max(maxx, max(temp, L-temp));
		}
		cout << minn << " " << maxx << endl;
	}	
	return 0;
}
