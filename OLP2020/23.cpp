#include<bits/stdc++.h>
using namespace std;
int m, n;
long long a[1010][1010];
int chk[1010][1010];
long long f[1010][1010];
void input()
{
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
}
long long cal(int k, int n)
{
    if (chk[k][n]) return f[k][n];
    chk[k][n] = 1;
    if (k == 0) return 0;
    if (k > n) return -1e9;
    f[k][n] = max(cal(k - 1, n - 1) + a[k][n], cal(k, n - 1));
    return f[k][n];
}
int main()
{
    input();
    cout << cal(m, n);
}
