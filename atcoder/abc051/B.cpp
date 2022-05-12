#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	#ifndef ONLINE_JUDGE
		freopen("input1.txt", "r", stdin);
		freopen("output1.txt", "w", stdout);
	#endif

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int K, S; cin >> K >> S;
	int count = 0;
	for(int a = 0; a <= K; a++){
		for(int b = 0; b <= K; b++){
			int c = S - a - b;
      		if (c >= 0 && c <= K){
          		count++;
        	}
		}
	}
	cout << count << '\n';
	return 0;
}