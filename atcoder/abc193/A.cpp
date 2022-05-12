#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	int a, b; cin >> a >> b;
	double parcentage = (((double)a-b)*100)/(double)a;
	cout << fixed << setprecision(20) << parcentage << '\n';
	return 0;
}