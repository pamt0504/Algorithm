#include <bits/stdc++.h>
using namespace std;

int dientich(int h, int w){
	return h * w;
}

struct hcn{
	int x, y, h, w, area;
};

bool cmp (hcn a, hcn b){
	return (a.area >= b.area) return false;
	else return true; 
}

int main()
{
	int n;
	cin >> n;
	hcn arr[1000];
	for (int i=0; i<n; i++){
		cin >> arr[i].x >> arr[i].y >> arr[i].w >> arr[i].h;
		arr[i].area = dientich(arr[i].h, arr[i].w);
	}
}
