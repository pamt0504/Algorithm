#include <bits/stdc++.h>

using namespace std;

int n;

string convert(string s){
    int add = 10 - (s[0] - '0');
    for (int i = 0; i < n; i++){
        int temp = (s[i] - '0' + add) % 10;
        s[i] = char(temp + '0');
    }
    return s;
}

int main()
{
	ifstream fi ("6.inp");
    ofstream fo ("6.OUT");
	fi >> n;
    string str;
    fi >> str;
    str += str;
    if (n == 1) {
        fo << "0";
        return 0;
    }
    string res = convert(str.substr(0,n));
    for (int i = 0; i < n; i++){
        string temp = convert(str.substr(i,i+n-1));
        if (res > temp) res = temp;
    }
    fo << res.substr(0,n);
}
