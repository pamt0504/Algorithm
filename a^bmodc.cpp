#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll modmu(ll a, ll b, ll MOD){
    if (b == 0) return 0;
    ll q = modmu(a,b/2,MOD);
    if (b % 2 == 0) return (q+q) % MOD;
    else return (q+q+a) % MOD;
}

ll pw (ll a, ll b, ll MOD){
    if (b == 0) return 1;
    ll q = pw(a,b/2,MOD);
    if (b % 2 == 0) return modmu(q,q,MOD);
    else return modmu(modmu(q,q),a, MOD);
}

int main(){
}
