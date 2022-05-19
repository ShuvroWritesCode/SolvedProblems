#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	#ifndef ONLINE_JUDGE
		freopen("inputf.txt", "r", stdin);
		freopen("outputf.txt", "w", stdout);
	#endif
 
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
 
 	int t; cin >> t;
 	while(t--){
 		long long n; cin >> n;
 		if(n == 1 or n == 2){
 			cout << 0 << '\n';
 		}
 		else if(n%2 == 0){
 			cout << (n/2)-1 << '\n';
 		}
 		else{
 			cout << n/2 << '\n';
 		}
 	}
    return 0;
}