#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
int n,f[10000],a[10000];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    f[1]=a[1];
    f[2]=a[2];
    for(int i=3;i<=n;i++)
    {
        int first=f[i-1]+a[1]+a[i];
        int second=f[i-2]+a[1]+a[2]+a[2]+a[i];
        f[i]=min(first,second);
    }
    cout<<f[n];
    return 0;
}
