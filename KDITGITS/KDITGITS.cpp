#include<bits/stdc++.h>
using namespace std;
int n;
 
int main(){
	cin>>n;
	while(n--){
		long long int x1,y1,m;
		cin>>x1>>y1;
		m=x1;
		for(int i=1;i<y1;i++){
			long long int z=m;
			int min1=10,max1=-1;
			while(z){
				int k=z%10;
 
				if(k<min1) min1=k;
				if(k>max1) max1=k;
				if(min1==0) break;
				z/=10;
			}
			if(min1==0) break;
			m+=min1*max1;
		}
		cout<<m<<endl;
	}
} 
