#include <bits/stdc++.h>
using namespace std;

struct num {
	string s;
	int id;
};

bool cmp(num a, num b){
	return a.s < b.s;
}

int main(){
	vector <num> a;
	pair <string, int> p;
	int n;
	cin >> n;
	for (int i=0; i<n; i++){
		num temp;
		cin >> temp.s;
		temp.id = i;
		a.push_back(temp);
	}
	sort(a.begin(),a.end(),cmp);
	for (int i=n-1; i>=0; i--){
		cout << a[i].s << " ";
	}
}
