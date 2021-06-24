#include<bits/stdc++.h>
using namespace std;
int main(){
	ifstream fi ("6.inp");
	ofstream fo ("6.out");
	int t;
	fi>>t;
	while(t--){
		long long a,b,c,d;
		fi>>a>>b>>c>>d;
		if(b>=a)fo<<b<<endl;
		else if(c<=d)fo<<-1<<endl;
		else fo<<b+(a-b+c-d-1)/(c-d)*c<<endl;
	}
	return 0;
}
