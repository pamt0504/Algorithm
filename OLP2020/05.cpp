#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int a[4][4] = { {1,-1,-1,1}, {1,-1,1,-1}, {-1,1,-1,1}, {-1,1,-1,1}};
	int len = s.size(), huong=0;
	float x=0, y=0;
	for (int i=0; i<len; i++){
		cout << s[i] << " ";
		if (s[i] == 'E' || s[i] == 'W' || s[i] == 'N' || s[i] == 'S'){
			if (s[i] == 'E') {
				if (huong%2 == 0){
					x += a[huong][0];
				}
				else y+= a[huong][0];
			}
			if (s[i] == 'W') {
				if (huong%2 == 1){
					x += a[huong][1];
				}
				else y+= a[huong][1];
			}
			if (s[i] == 'N') {
				if (huong%2 == 0){
					y += a[huong][2];
				}
				else x+= a[huong][2];
			}
			if (s[i] == 'S') {
				if (huong%2 == 1){
					x += a[huong][3];
				}
				else y+= a[huong][3];
			}
		}
		else {
			if (s[i] == 'R') huong +=1;
			if (s[i] == 'L') huong -=1;
		}
	}	
	cout << sqrt(x*x + y*y);
}
