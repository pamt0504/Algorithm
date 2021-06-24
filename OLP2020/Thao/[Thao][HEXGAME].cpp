#include <bits/stdc++.h>
using namespace std;
int res = INT_MAX;
struct HEX{
	int h1, h2, h3, h4, h5, h6, h7, h8, h9, h10;
};
bool check(HEX A){
	if (A.h1 == 1 && A.h2 == 2 && A.h3 == 3 && A.h4 == 8 && A.h5 == 0 && A.h6 == 0 && A.h7 == 4 && A.h8 == 7 && A.h9 == 6 && A.h10 == 5){
		return true;		
	}
	return false;
}
HEX Q1(HEX x){
	int t = x.h4;
	x.h4 = x.h8;
	x.h8 = x.h9;
	x.h9 = x.h6;
	x.h6 = x.h2;
	x.h2 = x.h1;
	x.h1 = t;
	return x;
}

HEX Q2(HEX x){
	int t = x.h5;
	x.h5 = x.h9;
	x.h9 = x.h10;
	x.h10 = x.h7;
	x.h7 = x.h3;
	x.h3 = x.h2;
	x.h2 = t;
	return x;
}

void TRY(HEX X, int cnt){
	if (check(X) == true){
		res = min(res, cnt);
		return;
	}
	else {
		if (cnt >= 25)
			return;
		TRY(Q1(X), cnt+1);
		TRY(Q2(X), cnt+1);
	}
}

int main(){
	HEX A;
	cin >> A.h1 >> A.h2 >> A.h3 >> A.h4 >> A.h5 >> A.h6 >> A.h7 >> A.h8 >> A.h9 >> A.h10;
	TRY(A,0);
	cout << res;
}
