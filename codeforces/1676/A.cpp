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

	int n; cin >> n;
	string ticket;
	for(int i = 1; i <= n; i++){
		cin >> ticket;
		if((ticket[0]+ticket[1]+ticket[2])==(ticket[3]+ticket[4]+ticket[5])){
			cout << "YES" << '\n';
		}
		else{
			cout << "NO" << '\n';
		}
	}
	return 0;
}