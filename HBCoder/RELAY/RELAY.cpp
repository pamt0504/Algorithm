#include <bits/stdc++.h>
using namespace std;

struct relay{
	int value, index;
} arr[1001];

bool tmp(relay a, relay b){
	if (a.value > b.value) return false;
	if (a.value < b.value) return true;
	else{
		if (a.index > b.index) return false;
		else return true;
	}
}

void in(int n){
	for (int i=1; i<=n; i++){
		cout << arr[i].value <<" " << arr[i].index << endl;
	}
}

int main(){
	ifstream fi ("5.inp");
	ofstream fo ("5.out");
	int n;
	fi >> n;
	for (int i=1; i<=n; i++){
		fi >> arr[i].value;
		arr[i].index = i;
	}
	sort(arr+1, arr+1+n, tmp);
	for (int i=1; i<=4; i++){
		fo << arr[i].index << " ";
	}
//	in(n);
	return 0;
}
