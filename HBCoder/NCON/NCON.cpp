#include <bits/stdc++.h>
using namespace std;

long long numberConverter(long long n)
{
    int i=2;
    while (i<=sqrt(n)){
        if (n % i == 0){
            n = n / i;
            i=1;
        }
        i++;
    }
    return n;
}

int main(){
	ifstream fi ("5.INP");
	long long n;
	cin >> n;
	ofstream fo ("5.OUT");
	cout << numberConverter(n);
}
