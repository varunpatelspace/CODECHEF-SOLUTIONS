/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : SUM0                                                        ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 11, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/SUM0                      ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
   int t,n; // your code goes here
   cin>>t;
   while(t--){
       cin>>n;
      
       if(n%2==0){
            for (int i = 0; i < n / 2; i++){
           cout<<"3"<<"-3"<<endl;
            }
   } else if(n%3==0){
      for (int i = 0; i < n / 3; i++) {
                cout << "1 2 -3 "<<endl;
            }
   } else{
       cout<<"-1"<<endl;
   }
 }
}
