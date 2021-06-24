#include <bits/stdc++.h>
using namespace std;

int convertStringToInt(string s){
	int res = 0;
	for (int i=0; i<s.size(); i++){
		res = res * 10 + s[i] - '0';
	}
	return res;
}

int main(){
	set <int> s;
	int n; cin >> n;
	string str = "";
	for (int i=1; i<=n; i++){
		cin >> str;
		string temp = "";
		for (int j=0; j<str.size(); j++){
			if (str[j] >= '0' && str[j] <= '9'){
				temp += str[j];
			}
			else {
				s.insert(convertStringToInt(temp));
				temp.clear();
			}
		}
		s.insert(convertStringToInt(temp));
		str.clear();
	}
	set <int> :: iterator it;
	for (it = s.begin(); it != s.end(); it++) cout << *it << " ";	
}
