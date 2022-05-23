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
  long long x;
	while(t--){
		int a, b, c, x, y; cin >> a >> b >> c >> x >> y;
		if(a >= x && b >= y){
			cout << "YES" << '\n';
		}
		else if(a >= x && (b+c >= y)){
			cout << "YES" << '\n';
		}
		else if(b >= y && (a+c >= x)){
			cout << "YES" << '\n';
		}
		else if(a<x && b<y && c>=((x-a)+(y-b))){
			cout << "YES" << '\n';
		}
		else{
			cout << "NO" << '\n';
		}
	}
	return 0;
}