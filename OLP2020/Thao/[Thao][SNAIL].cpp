#include <iostream>
using namespace std;
int main()
{
	long v,a,b;
	cin>>a>>b>>v;
	int x=0,d=0;
	while (x<=v)
	{
		x=x+a;
		d++; 
		if (x>=v) break;
		x=x-b;
	}
	cout<<d;
	return 0;
}
