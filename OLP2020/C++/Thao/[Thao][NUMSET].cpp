#include <bits/stdc++.h>
using namespace std;

int convertStringToInt(string s){
	int res = 0;
	for (int i=0; i<s.size(); i++){
		res = res + (s[i]-'0');
	}
	if (res % 3 == 0) return 1;
	return 0;
}

string del0 (string s){
	while (s[0] == '0'){
		s.erase(0,1);
	}
	if (s == "") return "0";
	return s;
}

int main(){
	string n, scopy;
	set<string> arr;
	cin >> n;
	scopy = n;
	if (convertStringToInt(del0(scopy)) == 1) arr.insert(del0(scopy));
	for (int i=0; i<n.size(); i++){
		scopy = n;
		while (scopy.size() != 1 && i != scopy.size()){
			scopy.erase(i,1);
			if (scopy == "0") arr.insert("0");
			if (convertStringToInt(del0(scopy)) == 1) {
				arr.insert(del0(scopy));
			}
		}
	}
	set <string> :: iterator it;
	for (it = arr.begin(); it != arr.end(); it++) cout << *it << endl;
	cout << arr.size();
}
