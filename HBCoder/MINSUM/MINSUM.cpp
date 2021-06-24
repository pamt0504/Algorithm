#include <bits/stdc++.h>
using namespace std;
// D A T A A N D V A R I A B L E
const int mn = 2000000;
int a[mn], b[mn];
int n;
// P R O T O T Y P E S
void Doc();
//void Print(int [], int , int);
int XuLi();
void Ghi(int);
void Sort(int [], int, int);
void Run();
// I M P L E M E N T A T I O N
int main(){
 Run();
 //cout << endl;
// system("PAUSE");
 return 0;
}
void Run(){
 Doc();
// Print(a,1,n); Print(b,1,n);
 Ghi(XuLi());
}
void Ghi(int m){
	cout << m;
}
int XuLi(){
 Sort(a,1,n);
 Sort(b,1,n);
 //cout << endl << "Sau khi sap tang ";
// Print(a,1,n); Print(b,1,n);
 int i = 1, j = n, m = 0x7fffffff, t, v;
 while (i <= n && j >= 1){
 t = a[i]+b[j]; v = abs(t);
 if (m > v) m = v;
 if (t == 0) return 0;
 if (t < 0) ++i;
 else --j;
 }
 // i = n+1 || j = 0
 for (;i <= n; ++i){
 t = a[i]+b[1]; v = abs(t);
 if (m > v) m = v;
 if (t >= 0) return m;
 }
 for (;j >= 1;--j){
 t = a[n]+b[j]; v = abs(t);
 if (m > v) m = v;
 if (t <= 0) return m;
 }
 return m; 
}
void Sort(int a[], int d, int c){
 int i = d, j = c, m = a[(d+c)/2], t;
 while (i <= j){
 while (a[i] < m) ++i;
 while (a[j] > m) --j;
 if (i <= j) {
 t = a[i]; a[i] = a[j]; a[j] = t;
 ++i; --j;
 }
 }
 if (d < j) Sort(a,d,j);
 if (i < c) Sort(a,i,c);
}
void Doc(){
 cin >> n;
 int i;
 for (i = 1; i <= n; ++i) cin >> a[i];
 for (i = 1; i <= n; ++i) cin >> b[i];
}
//void Print(int a[], int d, int c){
// int i;
// cout << endl;
// for (i = d; i <= c; ++i) cout << a[i] << " ";
//}
