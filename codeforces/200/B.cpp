#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++){
		cin  >> a[i];
	}
	double amount = 0;
	for (int i = 0; i < n; i++){
		amount += a[i];
	}
	cout << fixed << setprecision(10) << (double)(amount/(n*100))*100 << '\n';
}