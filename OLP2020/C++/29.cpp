#include <bits/stdc++.h>
using namespace std;

// nhap 2 so thuc duong a, b hay tinh tong tat ca cac so nguyen ko nho hon a va khong lon hon b
// 0.3 2.89  = 3;

int main(){
	double a, b;
	cin >> a >> b;
	long x = (int) a;
	long y = (int) b;
	cout << (y+x) * (y-x+1) / 2;
}
