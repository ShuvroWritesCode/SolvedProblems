#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	#ifndef ONLINE_JUDGE
		freopen("inputf.txt", "r", stdin);
		freopen("output1.txt", "w", stdout);
	#endif

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, a[100]; cin >> n;
	int sum = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		sum += a[i];
	}
	if(sum > 0){
		cout << "HARD";
	}
	else{
		cout << "EASY";
	}
	return 0;
}