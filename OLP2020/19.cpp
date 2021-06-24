#include <bits/stdc++.h>
using namespace std;

struct ROOM{
	int start,end;
};

ROOM arr[1000000];

bool cmp(ROOM x, ROOM y){
	if (x.start == y.start){
		if (x.end < y.end) return true;
		else return false;
	}
	else{
		if (x.start < y.start) return true;
		return false;	
	}
}

int main(){
//	ifstream fi ("10.INP");
//	ofstream fo ("10.OUT");
	int n;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> arr[i].start >> arr[i].end;
	}
	sort(arr,arr+n,cmp);
	int kt = arr[0].end;
	int d = 1;
	for (int i=1; i<n; i++){
		if (arr[i].start >= kt && arr[i].start != arr[i-1].start){
			d++;
			kt = arr[i].end;
		}
		else{
			kt = min (kt, arr[i].end);
		}
	}
	cout << d;
}

