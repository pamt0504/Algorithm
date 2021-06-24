#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
 	getline(cin,str);
	int k; cin >> k;
	int n = str.size();
	str = " " + str;
	int id = 1, x=k;
	while (n>1){
		if (x-- == 1) {
			str.erase(str.begin() + id);
			n--;
			if (id > n) id =1;
			x=k;
		}
		id++;
		if (id > n) id = 1;
	}
	str.erase(str.begin());
	cout << str;
	//fo << str;
	return 0;
}
