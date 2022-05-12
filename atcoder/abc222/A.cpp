#include<bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
  	cin.tie(0);
  	int n;
  	cin >> n;
  	if(n < 10)
    	cout << "000" << n << '\n';
  	else if(n < 100)
    	cout << "00" << n << '\n';
  	else if(n < 1000) 
    	cout << "0" << n << '\n';
  	else 
    	cout << n << '\n';
	return 0;
}