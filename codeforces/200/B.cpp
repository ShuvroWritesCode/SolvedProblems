#include<bits/stdc++.h>
using namespace std;

int32_t main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n; cin >> n;
	int a[n];
	double amount;
	for (int i = 0; i < n; i++){
		cin  >> a[i];
		amount += a[i];
	}
	cout << fixed << setprecision(10) << (double)(amount*100)/(n*100) << '\n';
}