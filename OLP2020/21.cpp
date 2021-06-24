#include <bits/stdc++.h>
using namespace std;
 
#define FOR(i,a,b) for(int i=a; i<=b; i++)
 
const int SIZE = 50000;
const int MAX = 200;
 
struct Pos {
	int x, y;
	Pos(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
	}
};
 
template<typename T>
class Queue {
public:
	T arr[SIZE];
	int first, last;
	Queue() {
		first = last = 0;
	}
	void clear() {
		first = last = 0;
	}
	void push(const T& x) {
		arr[(++last) % SIZE] = x;
	}
	T pop() {
		return arr[(++first) % SIZE];
	}
	bool isNotEmpty() {
		return first < last;
	}
};
 
int T, N;
Queue<Pos> Q;
int F[MAX + 1][MAX + 1];
bool Check[MAX + 1][MAX + 1];
int dx[2] = { 0,1 };
int dy[2] = { 1,0 };
 
int mu10(int x, int a);
 
int main()
{
	ios::sync_with_stdio(false);
 
	cin >> T;
 
	FOR(t, 1, T)
	{
		cout << "Case #" << t << endl;
		cin >> N;
 
		//
		FOR(i, 0, MAX)
			FOR(j, 0, MAX)
		{
			Check[i][j] = false;
			F[i][j] = -1;
		}
 
		Q.clear();
		Q.push(Pos(0, 0));
		Check[0][0] = true;
		F[0][0] = 0;
		bool found = false;
 
		while (Q.isNotEmpty() && found == false) {
			Pos x = Q.pop();
			FOR(i, 0, 1) {
				int nx = x.x + dx[i];
				int ny = x.y + dy[i];
				if (Check[nx][ny] == false && nx + ny <= MAX) {
					Check[nx][ny] = true;
					if (i == 0) { // tang 6
						F[nx][ny] = (F[nx][ny - 1] * 10 + 6) % N;
					}
					else { // tang 8
						F[nx][ny] = (8 * mu10(nx - 1 + ny, N) + F[nx - 1][ny]) % N;
					}
					if (F[nx][ny] == 0)
					{
						FOR(k, 1, nx) cout << 8;
						FOR(k, 1, ny) cout << 6;
						cout << endl;
						found = true;
						break;
					}
					Q.push(Pos(nx, ny));
				}
			}
		}
 
		if (found == false) {
			cout << -1 << endl;
		}
	}
 
	return 0;
}
 
int mu10(int x, int a) {
	int k = 1;
	FOR(i, 1, x)
		k = (k * 10) % a;
	return k;
}
