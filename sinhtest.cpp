#include <bits/stdc++.h>
using namespace std;
 
int random(int minN, int maxN){
    return minN + rand() % (maxN + 1 - minN);
}
 
int main(){
    srand((int)time(0));
	ofstream fo ("DINER/5.inp");
	int N = random(1,100);
	int M = random(1,100000);
	fo << N << " " << M << endl;
	while (N--){
		int x = random(10,100);
		int y = random(1,100);
		int sm = random(1,95);
		int pm = random(10,95);
		int sv = random(sm+1,100);
		int pv = random(pm+1,100);
		fo << x << " " << y << " " << sm << " " << pm << " " << " " << sv << " " << pv << endl;
	}
	return 0;    
}
