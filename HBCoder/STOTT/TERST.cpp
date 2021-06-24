#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
int main(){
	int t; cin >> t;
	while(t--){
		string s;
		cin >> s;
		vector<int> cnt(3);
		int ans = 1e9;
		int p = 0;
		for(int i = 0; i < s.size(); i++){
			while((cnt[0]==0 || cnt[1]==0 || cnt[2]==0) && p < s.size()){
				cnt[s[p]-'1']++; 
				p++;
			}	
			if(cnt[0]>0 && cnt[1]>0 && cnt[2]>0){
				ans = min(ans,p-i);
			}
			cnt[s[i]-'1']--;
		}
		if(ans > s.size()) ans = 0;
		cout << ans << "\n";
	}
}
