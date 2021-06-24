#include <bits/stdc++.h>
using namespace std;

int main(){
	int h, p , s;
	cin >> h >> p >> s;
	s++;
	if (s > 59) {
		p += s/60;
		s = s%60;
	}
	if (p > 59){
		h += p/60;
		p = p%60;
	}
	if (h > 23){
		h = h%24;
	}
	cout << h << " " << p << " " << s;
}
