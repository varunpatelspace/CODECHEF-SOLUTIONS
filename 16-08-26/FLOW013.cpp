/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : FLOW013                                                     ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 16, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/FLOW013                   ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
      int t,a,b,c;
      cin>>t;
      while(t--){
          cin>>a >>b >>c;
          int p=a+b+c;
          if(p==180){
              cout<<"YES"<<endl;
          }else{
              cout<<"NO"<<endl;
          }
      }
return 0;
}
