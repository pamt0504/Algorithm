#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, i=9;
	cin >> n;
	string res = "";
	if (n==0) {
		cout << 10;
		return 0;
	}
	if (n<10) {
		cout << n;
		return 0;
	}	
	while (n>1){
		if (n%i == 0){
			n=n/i;
			char temp = i + 48;
			res = temp + res;
			i=9;
		}
		else i--;
		if (i == 1) {
			cout << "-1";
			return 0;
			
		}
	}
	cout << res;
}
