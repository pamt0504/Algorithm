#include <bits/stdc++.h>
using namespace std;

int random(int minN, int maxN){
    return minN + rand() % (maxN + 1 - minN);
}

int main(){
    srand((int)time(0));
	ofstream fo ("4.inp");
	int N = 1000000;
	fo << N << endl;
	while (N--){
        fo << 1000000 << " ";
	}
	return 0;
}
