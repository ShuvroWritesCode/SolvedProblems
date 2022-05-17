#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	#ifndef ONLINE_JUDGE
		freopen("inputf.txt", "r", stdin);
		freopen("output1.txt", "w", stdout);
	#endif

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	for(int i = 0; i < t; i++){
		string a; cin >> a;
		int n =  a.size();
		if(n%2 == 0){
			string first = a.substr(0, n/2);
			string second = a.substr((n/2), n/2+1);
			if(first == second){
			cout << "YES" << '\n';
			}
			else{
				cout << "NO" << '\n';
			}
		}
		else{
			cout << "NO" << '\n';
		}
	}
	return 0;
}