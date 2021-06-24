#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) return false;
    return n > 1;
}

int main(){
	int n, A[101], count=0;
	cin >> n;
	for (int i=1; i<=n; i++){
		cin >> A[i];
	}
	for (int i=1; i<n; i++){
		for (int j=i+1; j<=n; j++){
			if (isPrime(__gcd(A[i],A[j]))) count++;
		}
	}
	cout << count;
}
