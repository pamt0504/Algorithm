#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ifstream fi("PARK5.INP");
	ofstream fo("PARK5.OUT");
    int T;
    fi >> T;
    while (T--){
        int n, m, res;
        fi >> n >> m;
        if (m == 1) res = (n+1) /2 ;
        else res = n;
 
        if (m > 1){
            if (m % 2 == 0){
            res = res * (m / 2);
            //cout << "yes";
        }
            else{
                res = res * (m / 2) + (n+1)/2;
            //c//out << "no";
            }
        }
 
        fo << res << endl;
    }
}
