#include <bits/stdc++.h>
using namespace std;

struct TAMGIAC{
	int a, b, c;
	int area(){
		return a + b + c;
	}
};

int main(){
	TAMGIAC A;
	A.a = 6;
	A.b = 6;
	A.c = 6;
	cout << A.area();
}
