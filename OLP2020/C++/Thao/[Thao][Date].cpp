#include <bits/stdc++.h>
using namespace std;
// nam nhu?n là nam chia h?t cho 400 
//ho?c chia h?t cho 4 mà không chia h?t cho 100
int main(){
	int thang[32];
	int n, t, nam;
	cin >> n>> t >> nam;
	thang[1]=thang[3]=thang[5]=thang[7]=thang[8]=thang[10]=thang[12] = 31;
	thang[4]=thang[6]=thang[9]=thang[11] = 30;
	thang[2] = 28;
	if ((nam%400 == 0) || (nam%4==0 && nam%100!=0)){
		thang[2] = 29;
	}
	else thang[2]=28;
	if (t == 12){
		if (n == thang[12]) {
			n = 1;
			t = 1;
			nam++;
		}
		else n++;
	}
	else {
		if (n == thang[t]){
			t++;
			n=1;
		}
		else n++;
	}
	cout << n << " " << t << " " << nam;
}
