#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	int a, b, c; cin >> a >> b >> c;
	if((a*a + b*b)<c*c){
		cout << "Yes" << '\n';
	}
	else{
		cout << "No" << '\n';
	}
	return 0;
}