#include <bits/stdc++.h>
using namespace std;

struct lamp{
	int x, d;
};

int n;
lamp arr[100000];

bool cmp (lamp a, lamp b){
	if (a.x == b.x) return a.d < b.d;
	return a.x < b.x;
	
}

void init(){
	cin >> n;
	for (int i=1; i<=n; i++){
		cin >> arr[i].x >> arr[i].d;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); 
	init();
	sort(arr+1, arr+n+1, cmp);
	int maxx = 0;
	int left = arr[1].x, right = left + arr[1].d;
	for (int i=2; i<=n; i++){
		if (arr[i].x <= right) right = max(right, arr[i].x + arr[i].d);
		else {
			maxx = max(maxx, right-left+1);
			left = arr[i].x;
			right = left + arr[i].d;
		}
	}
	cout << maxx;
}
