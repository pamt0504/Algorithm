#include <iostream>
#include <fstream>

using namespace std;

ifstream fi("ps.inp");
ofstream fo("ps.out");

long long p, q;

main(){
	while(true){
		cin>>p>>q;
		if(p == 1 && q == 1) break;
		long long x = 0, y = 1, u = 1, v = 0;
		do{
			long long m = x + u;
			long long n = y + v;		
			if(m > n){
				cout<<"L";	
				u = m;
				v = n;
				//cout<<u<<"/"<<v<<endl;
			}
			else{
				cout<<"R";
				x = m;
				y = n;
				//cout<<x<<"/"<<y<<endl;
			}
		}while(x+u != p || y+v != q);
		fo<<endl;
	}
}
