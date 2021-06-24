#include <bits/stdc++.h>
using namespace std;

int T[10000000];
//void update(int id, int l, int r, int pos, int value){
//	if (pos > r || pos < l) return;
//	if (id == pos) T[id] = value;
//	else {
//		int mid = (l + r) / 2;
//		update(id*2, l, mid, pos, value);
//		update(id*2, mid+1, r, pos, value);
//		T[id] = T[id*2] + T[]
//	}
//}

int main(){
	string str = "007";
	for (int i=0; i<str.size(); i++)
	if (str[0] >= '0' && str[0] <= '9') cout << str[i];
}
