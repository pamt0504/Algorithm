#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

int r[10] = {4,1,1,1,2,2,2,3,3,3}, c[10] = {1,1,2,3,1,2,3,1,2,3};
int index[10] = {0,1,2,3,4,5,6,7,8,9};

int minn = INT_MAX;
string s;

int ketqua(){
	int res = 0;
	for (int i=1; i<s.size(); i++){
		int id1 = s[i] - '0', id2 = s[i-1] - '0';
		int x = index[id1-1], y = index[id2-1];
		int temp = abs(r[x] - r[y]) + abs(c[x] - c[y]);
		res += temp;
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ifstream fi ("5.in");
	getline(fi,s);
	cout << s.size() << " " << ketqua() << endl;
	do{
		minn = min(minn, ketqua());
	} while (next_permutation(index, index + 10));
	cout << minn;
}
