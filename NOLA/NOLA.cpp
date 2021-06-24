long long nonOverlappingArea(std::vector<int> a, std::vector<int> b)
{
    typedef long long ll;
    ll k = 1;
    ll s1 = (k*a[2] - a[0])*(k*a[3] - a[1]);
    ll s2 = (k*b[2] - b[0])*(k*b[3] - b[1]);
    if (a[0] >= b[2] || a[2]<= b[0] ) return s1+s2;
    if (a[1] >= b[3] || a[3]<= b[1] ) return s1+s2;
    
    ll x0 = 0;ll x1 =0; ll x2 =0; ll x3 = 0;

    if (a[0] > b[0]) x0 = a[0];
    else x0 = b[0];
    if (a[1] > b[1]) x1 = a[1];
    else x1 = b[1];
    if (a[2] > b[2]) x2 = b[2];
    else x2 = a[2];
    if (a[3] > b[3]) x3 = b[3];
    else x3 = a[3];
    ll s = (x2-x0)*(x3-x1);
    return s1 + s2 - 2*s;

    
    


}

