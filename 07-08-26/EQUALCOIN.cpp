/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : EQUALCOIN                                                   ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 7, 2026                                              ║
 ║  URL      : https://www.codechef.com/problems/EQUALCOIN                 ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
   long long t,x,y;
   cin>>t;
   while(t--){
       cin>>x >>y;
      long long total=x+2*y;
       if(total%2==0){
        cout<<"YES\n";  
       }else{
           cout<<"NO\n";
       }
   }
   return 0;

}
