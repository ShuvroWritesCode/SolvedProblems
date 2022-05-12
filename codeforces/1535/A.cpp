#include<bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int a, b, c, d, n;
	cin >> n;
 
    for(int i = 0; i < n; i++){
       cin >> a >> b >> c >> d;
       int max1,max2,min1,min2;
       if (a>b){
           max1=a;
           min1=b;
       }
       else{
           max1=b;
           min1=a;
       }
       if (c>d){
           max2=c;
           min2=d;
       }
       else{
           max2=d;
           min2=c;
       }

       if (max1>min2 && max2>min1){
           cout << "YES" << '\n';
       }
       else{
           cout << "NO" << '\n';
       }
   }
   return 0;
}