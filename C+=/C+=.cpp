#include<iostream>
using namespace std;
int main()
{int t;
cin>>t;
while(t--){
long long int a,b,n,cnt=0;
cin>>a>>b>>n;
while(a<=n && b<=n)
{if(a>b)
{b+=a;}
else
{a+=b;}
cnt++;
}
cout<<cnt<<endl;}}
