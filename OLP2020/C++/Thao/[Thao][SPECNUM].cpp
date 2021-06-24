#include <bits/stdc++.h>
using namespace std;

int kt(int x){
	int res = 0;
	while (x>0){
		int t = x%10;
		if (x%2 == 0) res += t;
		else res -= t;
		x = x/10;
	}
	return res;	
}

int main(){
	int A, B;
	cin >> A >> B;
	int count = 0;
	for (int i=A; i<=B; i++){
		if (kt(i) == 0) count++;
	}
	cout << count;
}
