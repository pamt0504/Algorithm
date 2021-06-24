#include<bits/stdc++.h>
using namespace std;

int maxmodulo(int a[], int n)
{
    int maxx = a[0];
    for (int i=1; i<n; i++){
        maxx = max(maxx, a[i]);
    }
    int minn;
    for (int i=0; i<n; i++){
        if (a[i] < maxx) {
            minn = a[i];
            break;
        }
    }
    for (int i=0; i<n; i++){
        if (minn <= a[i] and a[i]< maxx) minn = a[i];
    }
    return minn;
}

int main(){
	ifstream fi ("6.INP");
	ofstream fo ("6.OUT");
	int n, a[100000]; fi >> n;
	for (int i=0; i<n; i++) fi >> a[i];
	fo << maxmodulo(a,n);
}
