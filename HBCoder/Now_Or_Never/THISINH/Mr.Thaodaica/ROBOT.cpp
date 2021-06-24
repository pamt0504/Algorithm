#include <bits/stdc++.h>
using namespace std;
int A[100001];
int countPosition(string s)
{
    int n = s.size();
    int id = 0;
    for (int i=0; i<n; i++){
        if (s[i] == 'L') id--;
        else id++;
        A[i] = id;
    }
    A[n] = 0;
    sort(A,A+n+1);
    int res = 1;
    for (int i=1; i<=n; i++)
        if (A[i] != A[i-1] ) res++;
    return res;
}
int main(){
	//ifstream fi ("test10/ROBOT.INP");
	//ofstream fo ("test10/ROBOT.OUT");
	string str;
	cin >> str;
	cout << countPosition(str);
	return 0;
}
