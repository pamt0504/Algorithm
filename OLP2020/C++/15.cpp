#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int len = s.size();
	int n=0;
	for (int i=0; i<len; i++){
		n = n*10 + s[i] - '0';
		n=n%11;
	}
	if (n == 0) cout << "YES";
	else cout << "NO";
}
