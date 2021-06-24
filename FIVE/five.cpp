#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a[20];
    a[1]=5;
    for (int i=2;i<=13;i++) a[i]=a[i-1]*5;
    int t,n;
    long long l,r,mid,tam,s,res;
    cin>>t;
    for (int i=1;i<=t;i++){
        cin>>n;
        if (n==0) cout<<'0'<<endl;
        else{
            l=1;
            r=5000000000;
            while (l<=r){
                tam=0;
                mid=(l+r)/2;
                for (int j=1;j<=13;j++) tam=tam+(mid/a[j]);
                if (tam==n){
                    res=mid;
                    break;
                }
                if (tam<n) l=mid+1;
                else{
                    r=mid-1;
                    res=mid;
                }
            }
            cout<<res-(res%5)<<endl;
        }
    }
}
