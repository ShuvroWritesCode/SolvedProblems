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
  while(t--) {
    long long a,b; cin >> a >> b;
    long long rem, num;
    rem = a % b;
    num = b - rem;
    if(num == b) {
        num = 0;
    }
    cout << num << '\n';
  }
	return 0;
}