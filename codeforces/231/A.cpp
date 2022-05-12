#include<bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a, b, c, n, ans; 
	cin >> n;
	ans = 0;
	for(int i = 0; i < n; i++){
		cin >> a >> b >> c;
		if(a+b+c > 1){
			ans += 1;
		}
	}
	cout << ans << '\n';
	return 0;
}