#include <string.h>
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
// D A T A A N D V A R I A B L E
const int mn = 1000001;
char p[mn];
int n, h;
const char * fn = "hprimes.inp";
const char * gn = "hprimes.out";
// P R O T O T Y P E S
void Doc();
void Sang();
void Ghi();
int Height(int x);
// I M P L E M E N T A T I O N
int main() {
 Doc(); Sang(); Ghi();
 cout << endl << endl << " Fini" << endl;
 return 0;
}
void Doc() {
 ifstream f(fn);
 f >> n >> h;
 f.close();
}
// Sang Eratosthenes
void Sang() { // p[i] = 0 <=> i nguyen to
 int can = (int) sqrt(n);
 int i, j, ni;
 memset(p,0,sizeof(p));
 for (i = 2; i <= can ; ++i)
 if (p[i] == 0)
 for (ni = n/i, j = i; j <= ni; ++j)
 p[i*j] = 1;
}
int Height(int x) { // tong so bit 1 cua x
 int d = 0;
 for (; x ; x /= 10) d += (x % 10);
 return d;
}
void Ghi() {
 int i;
 ofstream g(gn);
 for (i = 2; i <= n; ++i)
 if (p[i] == 0)
 if (Height(i) == h)
 g << endl << i;
 g.close();
}
