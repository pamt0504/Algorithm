
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, gcd = 0;
    ifstream fi ("4.inp");
    ofstream fo ("4.out");
    fi >> n;
    while (n--){
        int x;
        fi >> x;
        gcd = __gcd(gcd,x);
    }
    if (gcd == 1) fo << "-1";
    else{
        for (int i=2; i<sqrt(gcd); i++){
            if (gcd % i == 0){
                fo << i;
                return 0;
            }
        }
        fo << gcd;
    }
    return 0;
}
