#include <bits/stdc++.h>
using namespace std;
int n, k, inputArray[100001];
int arrayMaxConsecutiveSum()
{
    int a[n];
    a[0] = inputArray[0];
    for (int i=1; i<n; i++){
        a[i] = a[i-1] + inputArray[i];
    }
    int MAX = a[k-1];
    for (int i=k-1; i<n; i++){
        MAX = max (MAX, a[i]- a[i-k]);
    }
    return MAX;
}

int main(){
	ifstream fi ("6.inp");
	ofstream fo ("6.out");
	fi >> n >> k;
	for (int i=0; i<n; i++) fi >> inputArray[i];
	fo << arrayMaxConsecutiveSum();
	fi.close();
	fo.close();
	return 0;
}
