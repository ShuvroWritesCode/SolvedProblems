#include<bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
  	cin.tie(0);
  	int a, b;
  	cin >> a >> b;
  	if(a>b) 
    	cout << 0 << '\n';
  	else 
    	cout << (b-a)+1 << '\n';
	return 0;
}