#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("inputf.txt", "r", stdin);
		freopen("output1.txt", "w", stdout);
	#endif

	ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t; cin >> t;
    long long n;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		long long power = 1;
		while (2 * power <= n){
			power *= 2;
		}
		
		cout << n*(n + 1) / 2 - 2 * (power * 2 - 1) << '\n';
	}
	return 0;
}