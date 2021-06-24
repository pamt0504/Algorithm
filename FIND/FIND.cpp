#include <bits/stdc++.h>
using namespace std;

string str, temp;
int n,m;

int main(){
	ifstream fi ("16.inp");
	ofstream fo ("16.out");
	fi >> str;
	fi >> n >> m;
	while (n--){
		temp = str;
		reverse(temp.begin(), temp.end());
		str += temp;
	}
	if (m>=str.size()) {
		fo << "-1";
		return 0;
	}
	fo << str[m-1];
}
