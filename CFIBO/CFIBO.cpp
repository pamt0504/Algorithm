#include <bits/stdc++.h>
using namespace std;

long long fibo[100];

void san(){
	fibo[1] = 1;
	fibo[2] = 1;
	int i=3;
	while (true){
		fibo[i] = fibo[i-1] + fibo[i-2];
		if (fibo[i] > 20000000000) {
			//cout << i;
			return;
		}
		i++;
	}
}


int main(){
	san();
	ofstream fi("5.inp");
	ofstream fo("5.out");
	int A, B, count = 0;
	cin >> A >> B;
	fi << A <<" "<<B;
	for (int i=1; i<=51; i++){
		if (fibo[i] >= A && fibo[i] <= B){
			count++;
		}
	}
	cout << count;
	fo << count;
	return 0;
}
