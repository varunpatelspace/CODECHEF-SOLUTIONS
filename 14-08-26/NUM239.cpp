/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : NUM239                                                      ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 14, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/NUM239                    ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;  // your code goes here
    cin>>t;
    while(t--){
        int c=0;
        int l,r;
        cin>>l >> r;
        for(int i=l; i<=r; i++){
        if(i%10==2 || i%10==3 || i%10==9 ){
           c++;
        }
        }
         cout<<c<<endl;
    }
return 0;
}
