#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	#ifndef ONLINE_JUDGE
		freopen("inputf.txt", "r", stdin);
		freopen("output1.txt", "w", stdout);
	#endif
 
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
 
    string s; cin>>s;
    int j = 0;
    string k("hello");
    for(int i=0; i < s.length(); i++){
        if(s[i]==k[j]){
        	j++;
        }
        if(j==5){
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}