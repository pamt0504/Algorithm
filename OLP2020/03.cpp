#include <bits/stdc++.h>
using namespace std;

void init(char str[], vector<int> &v){
	for (int i = strlen(str)-1; i >= 0; i--){
		v.push_back(str[i]- '0');
	}
}

void print(vector<int> v){
	for (int i = v.size() - 1; i>=0; i--){
		cout << v[i];
	}
}

void add(vector<int> v1, vector<int> v2, vector<int> &v3){
	int length = v1.size() > v2.size() ? v1.size() : v2.size();
	v1.resize(length);
	v2.resize(length);
	int ans = 0;
	int temp;
	for (int i=0; i<length; i++){
		temp = v1[i] + v2[i] + ans;
		v3.push_back(temp%10);
		ans = temp/10;
	}
	if (ans > 0) v3.push_back(temp);
}

int main(){
	
	char a[] = "9235792759279519459174914";
	char b[] = "4834583459235929329992194213222";
	vector<int> v1,v2,v3;
	init(a,v1);
	init(b,v2);
	add(v1,v2,v3);
	print(v3);
}
