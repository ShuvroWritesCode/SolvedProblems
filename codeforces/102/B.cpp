#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	#ifndef ONLINE_JUDGE
		freopen("input1.txt", "r", stdin);
		freopen("output1.txt", "w", stdout);
	#endif
 
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
		
		int sum = 0;
		string s; cin >> s;
		for(int i = 0; i < s.size(); i++){
			sum += s[i] - '0';
		}
		int ans = 1;
		if(s.size() == 1){
			ans = 0;
		}
		while(sum>9){
			int temp = sum, newsum = 0;
			while(temp){
			newsum += temp%10;
			temp /= 10;
			}
			sum = newsum;
			ans++;
		}
		cout << ans << '\n';
	return 0;
}