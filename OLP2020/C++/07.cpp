#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	fflush(stdin);
	set <string> name;
	for (int i=1; i<=n; i++){
		string s;
		getline(cin,s);
		name.insert(s);
	}
//	set <string> :: iterator itr; 
//	for (itr = name.begin(); itr != name.end(); itr++){
//		cout << *itr;
//	}
	cout << name.size();
}
