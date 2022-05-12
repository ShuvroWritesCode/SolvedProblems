#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int y; cin >> y;
	for(int i = 0; 1; i++){
		y += 1;
		int a = y/1000%10;
		int b = y/100%10;
		int c = y/10%10;
		int d = y%10;
		if(a!=b and a!=c and a!=d and b!=c and b!=d and c!=d){
			break;
		}
	}
	cout << y << '\n';
	return 0;
}