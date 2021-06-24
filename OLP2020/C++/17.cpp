#include <bits/stdc++.h>
using namespace std;

struct line{
	int start, finish;
};

bool cmp(line a, line b){
	if (a.start < b.start) return true;
	if (a.start == b.start){
		if (a.finish < b.finish) return true;
		else return false;
	}
	return false;
}

vector <line> v, res;

void Print(){
	cout << endl;
	for (int i=0; i<res.size(); i++){
		cout << res[i].start << " " << res[i].finish << endl; 
	}
	cout << "=====================================\n";
}

int main(){
	int m, length = 0; cin >> m;
	while (true){
		int s, f;
		cin >> s >> f;
		if (s == 0 && f == 0) break;
		else{
			if (f >= 0){
				line temp;
				temp.start = s;
				temp.finish = f;
				v.push_back(temp);
				length++;
			}
		}
	}
	sort(v.begin(), v.end(), cmp);
	int end = v[0].finish, count = 1;
	if (v[0].start > 0 ){
		cout << "0";
		return 0;
	}
	if (length == 1){
		if (end >= m) cout << length << endl << v[0].start <<" " << v[0].finish;
		else cout << 0;
		return 0;
	} 
	for (int i=1; i<length; i++){
		if (v[i].start == v[i-1].start) end = v[i].finish;
		else {
			if (v[i].start > v[i-1].finish) {
				cout << "0";
				return 0;
			}
			if (v[i].start == v[i-1].finish) end = v[i].finish;
			else {
				count++;
				end = v[i].finish;
				res.push_back(v[i-1]);
			}
			if (end >= m) {
				res.push_back(v[i]);
				break;
			}
		}
	}
	cout << "=====================================\n";
	cout << count; 
	Print();
	return 0;
}
