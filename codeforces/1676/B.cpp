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
	
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int sum = 0;
		int mn = INT_MAX;
		for(int i = 0; i < n; i++){
			int cndy; cin >> cndy;
			sum += cndy;
			mn = min(mn, cndy);
		}
		cout << sum-(mn*n) << '\n';
	}
	return 0;
}