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
	
	string s, t; cin >> s;
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	for(int i = 0; i < s.size(); i++){
		if(s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u' or s[i] == 'y'){
			continue;
		}
		else{
			t += '.';
			t += s[i];
		}
	}
	cout << t << '\n';
	return 0;
}